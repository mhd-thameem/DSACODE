class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        int zeroes=0;
        for(int i:arr){
            if(i==0){
                zeroes++;
            }
        }
        int i=n-1;
        int j=n+zeroes-1;
        while(i>=0){
            if(j<n){
                arr[j]=arr[i];
            }j--;
            if(arr[i]==0){
                if(j<n){
                    arr[j]=0;
                }j--;
            }i--;
        }
    }
};