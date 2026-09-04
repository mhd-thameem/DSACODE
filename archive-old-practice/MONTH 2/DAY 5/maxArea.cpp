#include<bits/stdc++.h>
using namespace std;
int maxArea(const vector<int>& height){
    if(height.size()<2)return 0;
    int left=0,right=height.size()-1;
    int maxArea=0;
    while(left<right){
        int area=(right-left)*min(height[left],height[right]);
        maxArea=max(area,maxArea);
        if(height[left]<height[right]){
            left++;
        }else{
            right--;
        }
    }return maxArea;
}