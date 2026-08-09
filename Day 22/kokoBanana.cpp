#include <bits/stdc++.h>
using namespace std;
bool canFinish(vector<int>& piles, int h, int k){
    int totalHours=0;
    for(int i=0;i<piles.size();i++){
        totalHours+=(piles[i]+k-1)/k;
    }return totalHours<=h;
}
int minEatingSpeed(vector<int>& piles, int h){
    int left=1;
    int right=*max_element(piles.begin(),piles.end());
    int ans=right;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(canFinish(piles,h,mid)){
            ans=mid;
            right=mid-1;
        }else{
            left=mid+1;
        }
    }return ans;
}

int main(){
    vector<int> piles = {3,6,7,11};
    int h = 8;
    cout << minEatingSpeed(piles, h);
    return 0;
}