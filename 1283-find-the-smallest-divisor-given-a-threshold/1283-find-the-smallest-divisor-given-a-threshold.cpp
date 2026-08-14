class Solution {
public:
    long long s(vector<int>&nums ,int value){
        long long rsum=0;
        for(auto i: nums){
            rsum=rsum+ceil((double)i/(double)value);
        }
        return rsum;
    }
    int smallestDivisor(vector<int>& nums, int td) {
        int n=nums.size();
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            int sum=s(nums,mid);
            if(sum<=td){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};