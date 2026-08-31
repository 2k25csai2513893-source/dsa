class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        if(n==2){
            return nums;
        }

        long long x = 0;
        for(auto i: nums){
            x=x^i;
        }
        x=(x&(x-1))^x;
        int b1=0;
        int b2=0;
        for(int i=0;i<n;i++){
            if((x&nums[i])!=0){
                b1=b1^nums[i];
            }
            else{
                b2=b2^nums[i];
            }

        }
        return {b1,b2};
        
    } 
};