#ifndef TestServer_hpp
#define TestServer_hpp
#include "SimpleServer.hpp"
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include<unistd.h>
#include <iostream>
namespace hde
{
    class TestServer:public SimpleServer{
        private:
        char buffer[3000]={0};
        int new_socket;
        void accepter();
        void handler();
        void responder();

        public:

        TestServer();
        void launch();

    };
}

#endif/*TestServer.hpp*/