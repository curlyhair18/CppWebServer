/*This class implement a call to connect() function of socket as a defination
 to connect_to_network virtual function from SimpleSocket*/

#ifndef ConnectingSocket_hpp
#define ConnectingSocket_hpp


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
    class ConnectingSocket: public SimpleSocket
    {
        public:
        //Constructor
        ConnectingSocket(int domain,int service, int protocol, int port, u_long interface);
        // Virtual function from parents
        int connect_to_network(int sock, struct sockaddr_in address);
    };
}

#endif