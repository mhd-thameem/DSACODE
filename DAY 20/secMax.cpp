#include<iostream>
using namespace std;
int secondMaxi(int arr[],int j){
    int maxi=INT_MIN,sec=maxi;
    for(int i=0;i<j;i++){
        if(maxi<arr[i]){
            sec=maxi;
            maxi=arr[i];
        }
        else if(maxi>arr[i]&& sec<arr[i]){
            sec=arr[i];
        }
    }return sec;
}
int main(){
    int arr[]={4,5,6,8,2};
    int l=sizeof(arr)/sizeof(arr[0]);
    cout<<"The second biggest element is:"<<secondMaxi(arr,l);
    return 0;
}