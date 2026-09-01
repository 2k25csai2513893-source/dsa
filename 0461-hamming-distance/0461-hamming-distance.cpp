class Solution {
public:
    int hammingDistance(int a, int b) {
       int x=a^b;
       int c=0;
       while(x){
            c++;
            x=x&(x-1);
       }
       return c;
    }
};