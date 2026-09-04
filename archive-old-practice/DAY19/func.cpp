#include<iostream>
using namespace std;
void functC(){
    cout<<"C starting"<<endl;
    cout<<"C finishing"<<endl;
}
void functB(){
    cout<<"B starting"<<endl;
    functC();
    cout<<"B finishing"<<endl;
}
void functA(){
    cout<<"A starting"<<endl;
    functB();
    cout<<"A finishing"<<endl;
}
int main(){
    functA();
    return 0;
}