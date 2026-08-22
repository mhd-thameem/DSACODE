class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int l=1;l<=n/2;l++){
            if(n%l==0){
                string piece=s.substr(0,l);
                string construct="";
                int times=n/l;
                for(int i=0;i<times;i++){
                    construct+=piece;
                }
                if(construct==s){
                    return true;
                }
            }
        }
        return false;
    }
};