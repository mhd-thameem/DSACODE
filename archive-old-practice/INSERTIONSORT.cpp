#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=5,i,j,key,arr[]{5, 3, 8, 1, 4};
    for(i=1;i<n;i++){
        key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
           arr[j+1]=arr[j];
           j--;}
        arr[j+1]=key;
        
    
        }
       
    for(int i=0;i<n;i++)  
      cout<<arr[i]<<endl;
    return 0;
}