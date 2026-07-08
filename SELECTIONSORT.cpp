#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=5,i,j,min,arr[]{5, 4, 3, 2, 1};
    for(i=0;i<n;i++){
        min=i;
      for(int j=i+1;j<n;j++){
        if(arr[min]>arr[j+1]){
          min=j+1;
        }
        }
       swap(arr[i],arr[min]);
        }
       
    for(int i=0;i<n;i++)  
      cout<<arr[i]<<endl;
    return 0;
}