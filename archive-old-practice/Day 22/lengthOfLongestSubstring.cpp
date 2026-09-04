#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>
#include <unordered_map>
using namespace std;
int subarraySum(const vector<int>& a,int k) {
    unordered_map<int,int>mp;
    mp[0]=1;
    int sum=0,count=0;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
        if(mp.count(sum-k)){
            count+=mp[sum-k];
        }mp[sum]++;
    }return count;
}
int main() {
    vector<int> arr = {2, 4, 6, 8, 10};
    cout<<subarraySum(arr,2);
    return 0;
}