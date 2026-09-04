#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums){
    int n=nums.size();
    int i=0;
    while(i<n){
        int correctNum=nums[i];
        if(correctNum<n && nums[i]!=nums[correctNum]){
            swap(nums[i],nums[correctNum]);
        }else{
            i++;
        }
    }
    for(int i=0;i<n;i++){
        if(nums[i]!=i){return i;}
    }return n;
}