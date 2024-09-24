
/*This class Implements to call bind() function of socket as definationof the connect_to_network
virtual function from SimpleSocket*/
#ifndef BindingSocket_hpp
#define BindingSocket_hpp


#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <iostream>

#include "SimpleSocket.hpp"
namespace hde
{
    class BindingSocket : public SimpleSocket
    {

    private:
    //Member Variable
    //The binding variable stores the value 0if successfull
    int binding;

    // Member function
    //Virtaul function form parent to establish binding
    int connect_to_network(int sock, struct sockaddr_in address);

    public:
        // constructor
        //Parameterise constructor is required fot this class
        BindingSocket(int domain, int service, int Protocol, int port, u_long interface);
        //getter
        int get_binding();

    };

}


#endif/* BindingSocket.hpp*/