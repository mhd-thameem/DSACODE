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
git init
git add sumOfDigits.cpp fibo.cpp isPalindrome.cpp power.cpp
git commit -m "Day 5: recursion practice - sumOfDigits, power, palindrome, fibonacci"
git branch -M main
git remote add origin https://github.com/mhd-thameem/DSACODE.git
git push -u origin main