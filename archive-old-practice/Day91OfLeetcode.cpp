class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int n:nums){
            mp[n]++;
        }
        int maxi=*max_element(nums.begin(),nums.end());
        int n=nums.size()-1;
        if(k==1){
            int ans=-1;
            for(int i=0;i<=n;i++){
                if(mp[nums[i]]==1){
                    ans=max(ans,nums[i]);
                }
            }return ans;
        }
        else if(k==n+1){
            return maxi;
        }else{
            int ans=-1;
            if(mp[nums[0]]==1){
                ans=max(ans,nums[0]);
            }
            if(mp[nums[n]]==1){
                ans=max(ans,nums[n]);
            }return ans;
        }return -1;
    }
};