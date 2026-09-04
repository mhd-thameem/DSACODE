#include<bits/stdc++.h>
using namespace std;
int subarraySum(const vector<int>& nums, int k){
    int n=nums.size(),currSum=0,count=0;
    unordered_map<int,int>mp;
    mp[0]=1;
    for(int i=0;i<n;i++){
        currSum+=nums[i];
        if(mp.find(currSum-k)!=mp.end()){
            count+=mp[currSum-k];
        }
        mp[currSum]++;
    }return count;
}