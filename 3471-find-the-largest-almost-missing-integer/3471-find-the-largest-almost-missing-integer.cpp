class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(auto i: nums){
            mpp[i]++;
        }
        int ans=-1;
        if(k==1){
            
            for(auto i: nums){
                if(mpp[i]==1){
                    ans=max(ans,i);
                }
            }
          

        }
        if(k==n){
           ans= *max_element(nums.begin(),nums.end());

        }
        if(k<n && k>1){
            if(mpp[nums[0]]==1 && mpp[nums[n-1]]==1){
                ans=max(nums[0],nums[n-1]);
            }
            if(mpp[nums[0]]==1 && mpp[nums[n-1]]>1){
                ans=nums[0];
            }
            if(mpp[nums[0]]>1 && mpp[nums[n-1]]==1){
                ans=nums[n-1];
            }
            if(mpp[nums[0]]>1 && mpp[nums[n-1]]>1){
                return -1;
            }
        }
        return ans;
    }
};