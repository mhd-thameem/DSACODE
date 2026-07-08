#include<iostream>
using namespace std;
bool isPalindromeRecursive(const string &s, int left, int right){
    if(left>=right){return true;}
    if(s[left]!=s[right]){
        return false;
    }
    return isPalindromeRecursive(s,left+1,right-1);
}
int main(){
    string g="mala";
    int l=0,r=g.size()-1;
    cout<<isPalindromeRecursive(g,l,r);
    return 0;
}