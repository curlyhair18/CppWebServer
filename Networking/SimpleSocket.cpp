
// Simple socket object
#include "SimpleSocket.hpp"
using namespace hde;

// Default Constructor

SimpleSocket::SimpleSocket(int domain, int service, int Protocol, int port, u_long interface)
{

    // Define Address Structure
    address.sin_family = domain;
    address.sin_port = htons(port); // htons->Converts sequnce of bits in an order of system
    // but htons convert sequence form system to specific to network
    address.sin_addr.s_addr = htonl(interface);

    // Establishing Socket
    sock = socket(domain, service, Protocol);
    test_connection(sock);
    // Establishing Network Connection
    connection = Connect_to_network(sock, address);
    test_connection(connection);
};

// Test Connection Virtaul function

void SimpleSocket::test_connection(int item_to_test)
{
    // Confrims that Socket and Connection properly estblished
    if (item_to_test < 0)
    {
        perror("Failed to Connect");
        exit(EXIT_FAILURE);
    }
};

// getter function

struct sockaddr_in SimpleSocket::get_address()
{
    return address;
};
int SimpleSocket::get_sock()
{
    return sock;
}
int SimpleSocket::get_connection()
{
    return connection;
}

int main()
{
    return 0;
}
