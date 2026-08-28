class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long long ans=0;
        for(int i=0;i<n;i++){
           
            int value1=lower-nums[i];
            auto lb=lower_bound(nums.begin()+i+1,nums.end(),value1);
            int left=lb-nums.begin();

            int value2=upper-nums[i];
            auto ub=upper_bound(nums.begin()+i+1,nums.end(),value2);
            int right=ub-nums.begin();
            ans=ans+(right-left);


        }

        return ans;
    }
};