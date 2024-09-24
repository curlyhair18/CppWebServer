#include "SimpleServer.hpp"
using namespace hde;

SimpleServer::SimpleServer(int domain, int service, int protocol, int port, u_long interface, int bcklg) {
    socket = new ListeningSocket(domain, service, protocol, port, interface, bcklg);
}

ListeningSocket * SimpleServer::get_socket(){
    return socket;
}