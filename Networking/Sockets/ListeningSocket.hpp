#ifndef ListeningSocket_hpp
#define ListeningSocket_hpp

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <iostream>

#include "BindingSocket.hpp"
namespace hde
{
    class ListeningSocket : public BindingSocket
    {

    private:
        int backlog;
        int Listening;
    public:
        ListeningSocket(int domain, int service, int protocol, int port, u_long interface, int bcklg);
        void start_listening();
    };
}
#endif