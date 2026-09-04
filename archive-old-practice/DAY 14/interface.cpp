#include<iostream>
using namespace std;
class connection{
    public:
    virtual void connect()=0;
};
class security{
    public:
    virtual void encrypt()=0;
};
class NetworkNode:public connection,public security{
    public:
    void connect(){
        cout<<"Node connected to network.";
    }
    void encrypt(){
        cout<<"Traffic encrypted via AES-256.";
    }
};
int main(){
    NetworkNode N;
    N.connect();
    N.encrypt();
    return 0;
}