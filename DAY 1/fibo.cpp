#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==1||n==0){return n;}
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int x=4;
    cout<<fibonacci(x);
    return 0;
}