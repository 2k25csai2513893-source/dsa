class Solution {
public:
    int setbits(int n){
        int c=0;
        while(n!=0){
            c++;
            n=n & n-1;
        }
        return c;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(setbits(i)==k){
                ans=ans+nums[i];

            }
        }
        return ans;
    }
};