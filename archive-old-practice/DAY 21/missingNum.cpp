#include<iostream>
using namespace std;
int missNum1(int arr[],int n){
    int k=n+1;
    int tot=k*(k+1)/2,sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return tot-sum;
}
int missNum2(int arr[],int n){
    int xor1=arr[0],xor2=1;
    for(int i=1;i<n;i++){
        xor1=xor1^arr[i];
    }
    for(int i=2;i<=n+1;i++){
        xor2=xor2^i;
    }
    return xor1^xor2;
}
int main(){
    int arr[]={1,2,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<missNum1(arr,n)<<endl;
    cout<<missNum2(arr,n)<<endl;
    return 0;
}

