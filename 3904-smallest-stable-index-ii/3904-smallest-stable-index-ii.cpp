class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
       vector<int> pref;
       vector<int> suf(n);
       pref.push_back(nums[0]);
       
       for(int i=1;i<n;i++){
          pref.push_back(max(nums[i],pref[i-1]));
 
        }
       int mini=*min_element(nums.begin(),nums.end());
       suf[n-1]=nums[n-1];

       for(int i=n-2;i>=0;i--){
            suf[i]=min(nums[i],suf[i+1]);
           
         
        }
        for(int i=0;i<n;i++){
            if((pref[i]-suf[i])<=k){
                return i;
            }
        }
       return -1;
    }
};