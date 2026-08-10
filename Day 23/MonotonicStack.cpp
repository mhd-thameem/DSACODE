#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int> &arr){
    stack<int>st;
    vector<int> ans(arr.size(),-1);
    for(int i=0;i<arr.size();i++){
        while(!st.empty()&& arr[i]>arr[st.top()]){
            ans[st.top()]=arr[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;
}
int main(){
    vector<int> arr={2, 1, 2, 4, 3};
    vector<int> res=nextGreaterElement(arr);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}