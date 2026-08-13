class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return 0;
        }
        int ans=0;
        for(int i=1;i<n;i++){
            int dif=nums[i]-nums[i-1];
            if(dif>0){
                continue;
            }
            ans=ans+abs(dif)+1;
            nums[i]=nums[i]+abs(dif)+1;
        }
        return ans;
    }
};
