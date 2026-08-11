class Solution {
public:
    int mySqrt(int  n) {
        // return pow(x,0.5);
        int ans=0;
        int low=1;
        int high=n;
        while(low<=high){
            int mid=low+(high-low)/2;
          
            if(1LL*mid*mid<=n){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            
        }
       
        return ans;
    }
};