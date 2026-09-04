class Solution {
public:
    bool sumGame(string num) {
        int n=num.size(),sumR=0,sumL=0,qL=0,qR=0;
        for(int i=0;i<n/2;i++){
            if(num[i]=='?')qL++;
            else sumL+=num[i]-'0';
        }
        for(int i=n/2;i<n;i++){
            if(num[i]=='?')qR++;
            else sumR+=num[i]-'0';
        }
        if((qL+qR)%2!=0){
            return true;
        }
        return (sumL-sumR)*2!=(qR-qL)*9;
    }
};