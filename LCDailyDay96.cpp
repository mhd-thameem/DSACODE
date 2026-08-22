class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n,sum=0,mul=1;
        while(temp>0){
            int digit=temp%10;
            sum+=digit;
            mul*=digit;
            temp/=10;
        }return n%(sum+mul)==0;
    }
};