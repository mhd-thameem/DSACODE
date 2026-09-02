#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums){
    int n=nums.size();
    vector<vector<int>> ans;
    if(nums.size()<3)return {};
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-2;i++){
        if(i>0 && nums[i]==nums[i-1]){continue;}
        if(nums[i]>0)break;
        int left=i+1,right=n-1;
        while(left<right){
            if(nums[left]+nums[right]==-nums[i]){
            ans.push_back({nums[i],nums[left],nums[right]});left++;right--;
            while(left<right && nums[left]==nums[left-1]){left++;}
            while(left<right && nums[right]==nums[right+1]){right--;}
        }
        else if(nums[left]+nums[right]<-nums[i]){left++;}
        else{right--;}
        }
    }return ans;
}