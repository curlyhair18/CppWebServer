#include "ListeningSocket.hpp"
using namespace hde;


// Constructor
hde::ListeningSocket::ListeningSocket(int domain, int service, int protocol, int port, u_long interface,int bcklg):BindingSocket(domain,service,protocol,port,interface)
{

        //set backlog variable
        backlog = bcklg;
        //start listening to network using listen() from sys/ocket.h
        start_listening();
        //confirm the connection was successfull
        test_connection(Listening);

}

//Mutator
void ListeningSocket::start_listening()
    {
        //start listening on the network
        Listening=listen(get_sock(),backlog);
    }

//getter
int ListeningSocket::get_listening(){
    return Listening;
}

int ListeningSocket::get_backlog()
{
    return backlog;
}