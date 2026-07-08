#include<iostream>
using namespace std;
int sumOfDigits(int n){
    if(n/10==0){
        return n%10;
    }
    return n%10+sumOfDigits(n/10);
}
int main(){
    int x=785;
    cout<<sumOfDigits(x);
}