#include <bits/stdc++.h>
using namespace std;
int lowerBound(const vector<int>& nums, int target) {
    int low=0,high=nums.size()-1;
    int ans=high+1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]>=target){ans=mid;high=mid-1;}
        else{low=mid+1;}
    }return ans;
}
int upperBound(const vector<int>& nums, int target) {
    int low=0,high=nums.size()-1;
    int ans=high+1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]>target){ans=mid;high=mid-1;}
        else{low=mid+1;}
    }return ans;
}
pair<int,int> LB_UB(const vector<int>& nums,const vector<int>& nums1, int target){
    int lb=lowerBound(nums,target);
    if(lb==nums.size() || nums[lb]!=target){
        return {-1,-1};
    }
    int ub=upperBound(nums1,target);
    return {lb,ub-1};
}