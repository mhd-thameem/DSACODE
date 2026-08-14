class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> mp;
        int left=0,count=0,maxCount=0;
        for(int right=0;right<s.size();right++){
            mp[s[right]]++;
            if(mp[s[right]]>2){
                while(mp[s[right]]>2){
                    mp[s[left]]--;
                    left++;
                }
            }count=(right-left+1);
            maxCount=max(count,maxCount);
        }
        return maxCount;
    }
};