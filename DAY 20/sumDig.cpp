#include<iostream>
using namespace std;
int sum(int n){
    int tot=0;
    n=abs(n);
    while(n>0){
        int digit=n%10;
        n/=10;
        tot+=digit;
    }
    return tot;
}
int main(){
    int a=4536;
    cout<<"The sum of Digits is:"<<sum(a);
    return 0;
}