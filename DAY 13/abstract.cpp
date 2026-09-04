#include<iostream>
using namespace std;
class cryptic{
    public:
    virtual void hash_data(string input)=0;
};
class SHA256_Sim:public cryptic{
    public:
    void hash_data(string input){
        cout<<"SHA256: "<<input<<" parsed to hex blocks.";
    }
};
int main(){
    SHA256_Sim s;
    s.hash_data("Hello");
}