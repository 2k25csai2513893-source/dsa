class Solution {
public:
    int mySqrt(int  n) {
        // return pow(x,0.5);
        int ans=0;
        for (int i=1;i<=n;i++){
            if(1LL*i*i<=n){
                ans=i;
            }
            else{
                break;
            }
        }
        return ans;
    }
};