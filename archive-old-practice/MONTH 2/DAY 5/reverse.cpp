#include<bits/stdc++.h>
using namespace std;
void reverseArray(vector<int>& arr){
    if(arr.empty())return;
    int low=0,high=arr.size()-1;
    while(low<high){
        swap(arr[low],arr[high]);
        low++;high--;
    }
}