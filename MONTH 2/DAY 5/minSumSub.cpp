#include<bits/stdc++.h>
using namespace std;
int minSubArrayLen(int target, const std::vector<int>& nums){
    int left=0,min_len=INT_MAX,currSum=0;
    for(int right=0;right<nums.size();right++){
        currSum+=nums[right];
        while(currSum>=target){
            min_len=min(min_len,right-left+1);
            currSum-=nums[left];
            left++;
        }
    }return (min_len==INT_MAX)?0:min_len;
}