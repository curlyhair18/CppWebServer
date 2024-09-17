
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
    public:
        // constructor
        BindingSocket(int domain, int service, int Protocol, int port, u_long interface);
        // overiding the virtual function(Virtual function from parents)
        int connect_to_network(int sock, struct sockaddr_in address);
    };

}


#endif