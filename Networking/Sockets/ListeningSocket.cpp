#include "ListeningSocket.hpp"
using namespace hde;

hde::ListeningSocket::ListeningSocket(int domain, int service, int protocol, int port, u_long interface,int bcklg):BindingSocket(domain,service,protocol,port,interface)
{
        backlog = bcklg;
        start_listening();
        test_connection(Listening);

}
void ListeningSocket::start_listening()
    {
        Listening=listen(get_connection(),backlog);
    }
