#include<iostream>
using namespace std;
string reverStr(string k){
    int left=0,right=k.size()-1;
    while(left<right){
        swap(k[left],k[right]);
        left++;
        right--;
    }
    return k;
}
int main(){
    string j="thameem";
    cout<<reverStr(j);
    return 0;
}