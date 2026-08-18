class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>res;
        sort(arr.begin(),arr.end());
        int mini=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]-arr[i]<mini){
                mini=arr[i+1]-arr[i];
                res.clear();
                res.push_back({arr[i],arr[i+1]});
            }else if(arr[i+1]-arr[i]==mini){
                res.push_back({arr[i],arr[i+1]});
            }
        }return res;
    }
};