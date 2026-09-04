#include<bits/stdc++.h>
using namespace std;
void transform(string &s){
    int read=0,write=0,n=s.size();
    while(read<n){
        while(read<n && s[read]==' '){
            read++;
        }
        if(read==n)break;
        if(write>0){
            s[write++]=' ';
        }
        while(read<n && s[read]!=' '){
            s[write++]=s[read++];
        }
    }s.resize(write);
}
void reverse(string& s,int left,int right){
    while(left<right){
        swap(s[left],s[right]);
        left++;right--;
    }
}
void reverseWordsSimple(string& s){
    if(s.empty())return;
    transform(s);
    reverse(s,0,s.size()-1);
    int start=0;
    for(int end=0;end<=s.size();end++){
        if(end==s.size()||s[end]==' '){
            reverse(s,start,end-1);
            start=end+1;
        }
    }
}