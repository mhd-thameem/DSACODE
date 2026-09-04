class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0,i=0;
        int n=mat.size();
        for(int i=0;i<n;i++){
            sum+=mat[i][i];
            sum+=mat[i][mat.size()-1-i];
        }
        if(n%2!=0){
            sum-=mat[n/2][n/2];
        }
        return sum;
    }
};