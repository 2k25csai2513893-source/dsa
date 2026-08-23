class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            int req=target-nums[i];
            int low=i+1;
            int high=n-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(nums[mid]==req){
                    ans.push_back(i+1);
                    ans.push_back(mid+1);
                    return ans;

                }
                else{
                    if(nums[mid]<req){
                        low=mid+1;
                    }
                    else{
                        high=mid-1;
                    }
                }
            }
        }
        return {};
    }
};