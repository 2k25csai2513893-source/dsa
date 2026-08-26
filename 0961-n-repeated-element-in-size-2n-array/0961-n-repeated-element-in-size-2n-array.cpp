class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=(nums.size())/2;
        unordered_map<int,int>mpp;
        for(auto i: nums){
            mpp[i]++;
        }
        for(auto it: mpp){
            if(it.second==n){
                return it.first;
            }
        }
      return 1;
        
    }
};