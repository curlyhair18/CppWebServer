# include"TestServer.hpp"
using namespace hde;
using namespace std;



 TestServer::TestServer():SimpleServer(AF_INET,SOCK_STREAM,0,80,INADDR_ANY,10){
    launch();
};

void TestServer::accepter(){
    struct sockaddr_in address= get_socket()->get_address();
    int addrlen = sizeof(address);
    new_socket=accept(get_socket()->get_sock(), (struct sockaddr *)&address,(socklen_t *)&addrlen);
    read(new_socket,buffer, 30000);

}
 void TestServer::handler(){
    cout<<buffer<<endl; 
 };
 

 void TestServer::responder(){
    const  char *hello= "Hello form server";
     write(new_socket,hello, strlen(hello));
     close(new_socket);

 };

 void TestServer::launch(){
    cout<<"==========WAITING==============="<<endl;
    accepter();
    handler();
    responder();

    cout<<"==========Done==============="<<endl;
     
 };