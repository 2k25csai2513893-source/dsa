class Solution {
public:
    int minBitFlips(int start, int goal) {
        int num=start^goal;
        int c=0;
        while(num!=0){
            c++;
            num=num&num-1;
        }
        return c;
        
    }
};