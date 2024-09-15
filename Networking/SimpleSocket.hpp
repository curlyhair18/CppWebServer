//

//

//

//
#ifndef hdelibc_hpp
#define hdelibc_hpp

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <iostream>

// defining namespace
namespace hde
{
    class SimpleSocket // Creating class for Socket
    {
    private:
        struct sockaddr_in address;
        int sock;
        int connection;

    public:
        // Parameter of SimpleSocket(DOMAIN i.e IPv4/IPv6,TYPE i.e UDP/TCP, PROTOCOL i.e in case of ip=0)
        SimpleSocket(int domain, int service, int Protocol, int port, u_long interface);
        // Virtual function to connect to a network
        virtual int Connect_to_network(int sock, struct sockaddr_in address) = 0;
        // functions to test socket and connection
        void test_connection(int);
        // Getter Function
        struct sockaddr_in get_address();
        int get_sock();
        int get_connection();

        // ~SimpleSocket();
    };

    // SimpleSocket::SimpleSocket(/* args */)
    // {
    // }

    // SimpleSocket::~SimpleSocket()
    // {
    // }

}
#endif