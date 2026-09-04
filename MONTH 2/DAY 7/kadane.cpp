#include<bits/stdc++.h>
using namespace std;
int maxSubArray(const vector<int>& nums){
    if(nums.empty())return 0;
    int currSum=nums[0],maxSum=nums[0];
    for(int i=1;i<nums.size();i++){
        currSum=max(nums[i],currSum+nums[i]);
        maxSum=max(maxSum,currSum);
    }return maxSum;
}