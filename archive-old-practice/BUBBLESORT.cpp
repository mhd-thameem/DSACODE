#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=5,i,j,temp,arr[]{5, 1, 4, 2, 8};
    for(i=0;i<n;i++){
      for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
         swap(arr[j],arr[j+1]);
          }
          }
        }
    for(int i=0;i<n;i++)  
      cout<<arr[i]<<endl;
    return 0;
}