#include<bits/stdc++.h>
using namespace std;
int maxSubarraySumFixed(const vector<int>& nums, int k){
    if(nums.size()<k)return 0;
    int currSum=0,maxSum=INT_MIN;
    for(int i=0;i<k;i++){
        currSum+=nums[i];
    }
    maxSum=max(currSum,maxSum);
    for(int i=k;i<nums.size();i++){
        currSum+=nums[i]-nums[i-k];
        maxSum=max(currSum,maxSum);
    }return maxSum;
}