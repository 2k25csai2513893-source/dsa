class Solution {
public:
    int suf(vector<int> & nums,int n){
        set<int> st;
        st.insert(nums.begin()+n,nums.end());
        return st.size();
    }
    int pref(vector<int>& nums,int n){
        set<int> st;
        st.insert(nums.begin(),nums.begin()+n+1);
        return st.size();
    }
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        
        for(int i=0;i<n;i++){
            int p=pref(nums,i);
            int s=suf(nums,i+1);
            ans.push_back(p-s);

        }
      return ans;
        
    }
};