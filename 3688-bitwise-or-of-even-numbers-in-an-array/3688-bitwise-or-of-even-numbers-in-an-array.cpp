class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int ans=0;
        for(auto i: nums){
            if(i%2==0){
                ans=ans | i;
            }
        }
        return ans;
    }
};