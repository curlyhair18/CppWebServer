#include "ListeningSocket.hpp"
using namespace std;
using namespace hde;
int main(){
    cout<<"Starting Socket...."<<endl;
    cout<<"Binding Socket..."<<endl;
    BindingSocket bs = BindingSocket (AF_INET, SOCK_STREAM, 0 , 80, INADDR_ANY);
    cout<<"Listening Socket..."<<endl;
    ListeningSocket ls = ListeningSocket(AF_INET, SOCK_STREAM, 0 , 81, INADDR_ANY,10);

}
