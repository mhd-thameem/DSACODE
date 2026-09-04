#include<bits/stdc++.h>
using namespace std;
vector<int> temperatures(vector<int> &arr){
    stack<int>st;
    vector<int> ans(arr.size(),0);
    for(int i=0;i<arr.size();i++){
        while(!st.empty()&& arr[i]>arr[st.top()]){
            ans[st.top()]=i-st.top();
            st.pop();
        }
        st.push(i);
    }
    return ans;
}
int main(){
    vector<int> temp={73,74,75,71,69,72,76,73};
    vector<int> res=temperatures(temp);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}