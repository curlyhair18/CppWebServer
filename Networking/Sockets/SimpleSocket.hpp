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
        // Member varaibles
        // Once Instantiated, sock contains the address of socket object on network
        //  This should be non negetive number
        int sock;
        // The address variable is as struct that contains the information about the protocol, type and interface
        // of a given socket. These parameter are specified and set in the costructor
        struct sockaddr_in address;
        // int connection;

    public:
        // Parameter of SimpleSocket(DOMAIN i.e IPv4/IPv6,TYPE i.e UDP/TCP, PROTOCOL i.e in case of ip=0)
        // Parameterised constructor is required to instantiate the class
        SimpleSocket(int domain, int service, int Protocol, int port, u_long interface);

        // Virtual function to connect to a network
        // function connects to network  using either bind() or connect()  from sys/socket.h
        virtual int connect_to_network(int sock, struct sockaddr_in address) = 0;

        // tester
        //  functions ends program if connection is not properly established.
        // This should be checked frequently
        void test_connection(int);


        // Getter Function
        struct sockaddr_in get_address();
        int get_sock();
        int get_connection();
        //setter function
         void set_connection(int);



    };

}
#endif /*SimpleSocket.hpp*/