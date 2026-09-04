#include <bits/stdc++.h>
using namespace std;
int minSubArrayLen(int target, const vector<int>& nums) {
    int left=0,min_len=INT_MAX,sum=0;
    for(int right=0;right<nums.size();right++){
        sum+=nums[right];
        while(sum>=target){
            min_len=min(min_len,right-left+1);
            sum-=nums[left];
            left++;
        }
    }return (min_len==INT_MAX)?0:min_len;
}