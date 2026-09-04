#include<bits/stdc++.h>
using namespace std;
bool capacity(const vector<int>&v,int cap,int d){
    int load=0,day=1;
    for(int i=0;i<v.size();i++){
        if(load+v[i]>cap){
            day++;
            load=v[i];
        }else{
            load+=v[i];
        }
    }return day<=d;
}
int shipContainers(const vector<int>&v,int d){
    int left=*max_element(v.begin(),v.end());
    int right=accumulate(v.begin(),v.end(),0),ans=right;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(capacity(v,mid,d)){
            ans=mid;
            right=mid-1;
        }else{
            left=mid+1;
        }
    }
    return ans;
}

bool canSplit(vector<int>& nums, int maxSum, int m) {
    int currSum=0,count=1;
    for(int i=0;i<nums.size();i++){
        if(currSum+nums[i]>maxSum){
            count++;
            currSum=nums[i];
        }else{
            currSum+=nums[i];
        }
    }return count<=m;
}
int splitArray(vector<int>& nums, int m){
    int left=*max_element(nums.begin(),nums.end());
    int right=accumulate(nums.begin(),nums.end(),0),ans=right;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(canSplit(nums,mid,m)){
            ans=mid;
            right=mid-1;
        }else{
            left=mid+1;
        }
    }return ans;
}
int main(){
    vector<int>nums = {7,2,5,10,8};
    int m=2;
    cout<<splitArray(nums,m);
}