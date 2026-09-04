#include<iostream>
using namespace std;
int main(){
    int N,ans=1;
    cout<<"Enter N:";
    cin>>N;
    int k=N;
    while(k>0){
        cout<<k<<" ";
        k--;
    }
    cout<<" Blastoff\n";
    for(int i=1;i<=N;i++){
        ans*=i;
    }
    cout<<"The Factorial is:"<<ans;
    return 0;
}