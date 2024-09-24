#ifndef SimpleServer_hpp
#define SimpleServer_hpp


#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <iostream>

#include "../Networking/hdelibc_networking.hpp"

namespace hde {

    class SimpleServer{
        private:
        ListeningSocket * socket;
        virtual void accepter()=0;
        virtual void handler()=0;
        virtual void responder()=0;
        public:
           SimpleServer(int domain, int service, int protocol, int port, u_long interface, int bcklg);
           virtual void launch()=0;
           ListeningSocket * get_socket();
    };
}

#endif /*SimpleServer*/
