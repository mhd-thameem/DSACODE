#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int>& nums){
    int low=0,mid=0,high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            low++,mid++;
        }else if(nums[mid]==1){
            mid++;
        }else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}
int main(){
    vector<int>vec={0,  1,  2,  0,  2};
    sortColors(vec);
    for(int i:vec){
        cout<<i<<" ";
    }
    return 0;
}