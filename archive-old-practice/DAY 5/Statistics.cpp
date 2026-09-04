#include<iostream>
using namespace std;
int main(){
    int arr[5]={12, 45, 7, 23, 56};
    int sum=0,maxi=arr[0];
    for(int i=0;i<5;i++){
        sum+=arr[i];
        if(maxi<arr[i]){
            maxi=arr[i];
        }
    }
    cout<<"The Sum of Array is: "<<sum<<endl;
    cout<<"The Maximum Element of Array is: "<<maxi<<endl;
    return 0;
}