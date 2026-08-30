class Solution {
public:
    int smallestNumber(int n) {
        if(n==1){
            return 1;
        }
        if((n & n-1)==0){
            n++;
        }
        while((n & n-1)!=0){
            n++;
        }
        return n-1;
        
    }
};