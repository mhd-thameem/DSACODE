#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your Age:";
    cin>>age;
    if(age>=0 && age<=5){
        cout<<"Ticket is Free!";
    }else if(age<=12){
        cout<<"Ticket Price is $5!";
    }else if(age<=60){
        cout<<"Ticket Price is $10!";
    }else if(age<120){
        cout<<"Ticket Price is $7!";
    }else{
        cout<<"Enter Valid Age!!!";
    }
    return 0;
}