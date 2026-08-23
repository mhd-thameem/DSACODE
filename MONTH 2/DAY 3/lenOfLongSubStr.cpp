#include<bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(const string& s) {
    int hash[256]={0};
    int left=0,maxLen=0;
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
        while(hash[s[i]]>1){
            hash[s[left]]--;
            left++;
        }
        maxLen=max(maxLen,i-left+1);
    }return maxLen;
}