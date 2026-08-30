class Solution {
public:
    int setbits(int n){
        int c=0;
        while(n!=0){
            c++;
            n=n&n-1;
        }
        return c;
    }
    bool prime(int num){
        if(num<=1){
            return false;
        }
        for(int i=2;i<=sqrt(num);i++){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int ans=0;
        while(left<=right){
            int n=setbits(left);
            if(prime(n)){
                ans+=1;
            }
            left++;
        }
       return ans;
        
    }
};