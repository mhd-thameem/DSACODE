#include <bits/stdc++.h>
using namespace std;
int maxArea(const vector<int>& height) {
    int left=0,right=height.size()-1;
    int maxi=0;
    while(left<right){
        int area=(right-left)*min(height[left],height[right]);
        if(height[left]<=height[right]){
            left++;
        }else{
            right--;
        }maxi=max(maxi,area);
    }return maxi;
}
int main(){
    vector<int>vec={1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout<<maxArea(vec);
    return 0;
}