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
namespace hde{
    class BindingSocket:SimpleSocket{
        public:


        //constructor
        BindingSocket(int domain,int service, int Protocol,int port, u_long interface):SimpleSocket( domain, service,  Protocol, port, interface){
            int 
        };
            

        

    };

}


#endif