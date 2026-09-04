#include<bits/stdc++.h>
using namespace std;
int subarraySum(const vector<int>& nums, int k) {
    unordered_map<int,int>prefix;
    prefix[0]=1;
    int currSum=0,count=0;
    for(int i=0;i<nums.size();i++){
        currSum+=nums[i];
        if(prefix.find(currSum-k)!=prefix.end()){
            count+=prefix[currSum-k];
        }
        prefix[currSum]++;
    }return count;
}