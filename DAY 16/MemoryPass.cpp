#include<iostream>
using namespace std;
int main(){
    int base_val=10;
    int *p=&base_val;
    int &r=base_val;
    cout<<"base_Val: "<<base_val<<endl;
    cout<<"base_Val: "<<*p<<endl;
    cout<<"base_Val: "<<r<<endl;
    return 0;
}