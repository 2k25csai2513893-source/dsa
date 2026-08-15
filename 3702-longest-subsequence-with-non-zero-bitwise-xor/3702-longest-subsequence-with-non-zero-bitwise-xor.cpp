class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
       
        int ans=0;
        if(n==1 && nums[0]==0){
            return 0;
        }
        for(auto i: nums){
            ans=ans^i;
        }
        if(ans!=0){
            return n;
        }
        for(auto i: nums){
            if(i!=0){
                return n-1;
            }
            
        }
        return 0;
    }
};