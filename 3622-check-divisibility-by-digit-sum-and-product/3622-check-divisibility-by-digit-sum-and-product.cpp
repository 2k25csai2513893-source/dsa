class Solution {
public:
    bool checkDivisibility(int n) {
        int digit=n;
        long long sum=0;
        long long mul=1;
        while(n>0){
            int d=n%10;
            sum=sum+d;
            mul=mul*d;
            n=n/10;

        }
        if(digit%(sum+mul)==0){
            return true;
        }
        return false;
        
    }
};