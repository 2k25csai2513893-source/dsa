class Solution {
public:
    int fun(vector<int>& nums,long long m){
        int n=nums.size();
        long long sum=nums[0];
        int c=1;

        for(int i=1;i<n;i++){
            if(sum+nums[i]<=m){
                sum+=nums[i];


            }
            else{
                sum=nums[i];
                c++;
            }
            


        }
        return c;

    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        long long  low=*max_element(nums.begin(),nums.end());
        long long high=0;
        for(auto i: nums){
            high+=i;
        }
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long value=fun(nums,mid);
            if(value<=k){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return low;
    }
};