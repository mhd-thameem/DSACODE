#include<bits/stdc++.h>
using namespace std;
vector<int> topKfreqElement(vector<int>& nums, int k){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minHeap;
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    for(auto const & entry:mp){
        minHeap.push({entry.second,entry.first});
        if(minHeap.size()>k){
            minHeap.pop();
        }
    }vector<int>res;
    while(!minHeap.empty()){
        res.push_back(minHeap.top().second);
        minHeap.pop();
    }
    return res;
}
int main(){
    vector<int>nums = {1,1,1,2,2,3};
    int k=2;
    nums=topKfreqElement(nums,k);
    for(int n:nums){
        cout<<n<<" ";
    }
    return 0;
}