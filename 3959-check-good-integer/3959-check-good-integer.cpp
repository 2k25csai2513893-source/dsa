class Solution {
public:
    bool checkGoodInteger(int n) {
        int temp=n;
        long long sum=0;
        long long sqsum=0;
        while(n>0){
            sum=sum+(n%10);
            n=n/10;

        }
        while(temp>0){
            int d=temp%10;
            sqsum=sqsum+(d*d);
            temp=temp/10;
        }
        if((sqsum-sum)>=50){
            return true;
        }
        return false;
        
    }
};