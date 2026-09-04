#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>
#include <unordered_map>
using namespace std;
int numOfVowel(string &a,int k){
    int count=0,maxVowel=0;
    for(int i=0;i<k;i++){
        char c=tolower(a[i]);
        if( c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u' ){
            count++;
        }
    }
    maxVowel=max(count,maxVowel);
    for(int i=k;i<a.size();i++){
        char f=tolower(a[i-k]);
        char l=tolower(a[i]);
        if( f=='a'|| f=='e'|| f=='i'|| f=='o'|| f=='u' ){
            count--;
        }
        if( l=='a'|| l=='e'|| l=='i'|| l=='o'|| l=='u' ){
            count++;
        }
        maxVowel=max(count,maxVowel);
    }return maxVowel;
}
void star(int n){
    int m=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=n-i-1;j<n;j++){
            cout<<m++;
        }
        cout<<endl;
    }
}
int main() {
    vector<int>a={2, 1, 5, 1, 3, 2};
    string s="thameem";
    int n=4;
    star(n);
    
}