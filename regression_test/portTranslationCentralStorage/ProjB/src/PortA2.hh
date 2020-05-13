// This Test Port skeleton header file was generated by the
// TTCN-3 Compiler of the TTCN-3 Test Executor version CRL 113 200/6 R5A
// for ebotbar (ebotbar@ebotbarVB) on Thu Dec  6 16:47:16 2018

// Copyright (c) 2000-2020 Ericsson Telecom AB

// You may modify this file. Add your attributes and prototypes of your
// member functions here.

#ifndef PortA2_HH
#define PortA2_HH

#include <TTCN3.hh>

// Note: Header file B.hh must not be included into this file!
// (because it includes this file)
// Please add the declarations of message types manually.

namespace B {

class PortA2_PROVIDER : public PORT {
public:
	PortA2_PROVIDER(const char *par_port_name);
	~PortA2_PROVIDER();

	void set_parameter(const char *parameter_name,
		const char *parameter_value);

private:
	/* void Handle_Fd_Event(int fd, boolean is_readable,
		boolean is_writable, boolean is_error); */
	void Handle_Fd_Event_Error(int fd);
	void Handle_Fd_Event_Writable(int fd);
	void Handle_Fd_Event_Readable(int fd);
	/* void Handle_Timeout(double time_since_last_call); */
protected:
	void user_map(const char *system_port);
	void user_unmap(const char *system_port);

	void user_start();
	void user_stop();

	void outgoing_send(const INTEGER& send_par);
	virtual void incoming_message(const INTEGER& incoming_par) = 0;
};

} /* end of namespace */

#endif