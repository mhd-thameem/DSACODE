#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums,int n) {
    int reader=0,writer=0;
    for(int reader=0;reader<n;reader++){
        if(nums[reader]!=0){
            swap(nums[reader],nums[writer]);
            writer++;
        }
    }
}
int main(){
    vector<int>vec={0, 1, 0, 3, 12};
    moveZeroes(vec,vec.size());
    for(int i:vec){
        cout<<i<<" ";
    }return 0;
}