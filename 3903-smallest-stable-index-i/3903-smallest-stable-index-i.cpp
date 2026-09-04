class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int ans=INT_MAX;
        bool indi=false;

        for(int i=0;i<nums.size();i++){
            int maxi=*max_element(nums.begin(),nums.begin()+i+1);
            int mini=*min_element(nums.begin()+i,nums.end());
            if(maxi-mini <= k){
                ans=min(ans,i);
                indi=true;
            }

        }
        if(indi==false){
            return -1;
        }
        return ans;
    }
};