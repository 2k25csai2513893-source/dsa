class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int  n=nums.size();
        unordered_map<int,int> mpp;
        for(auto i: nums){
            mpp[i]++;
        }
        int i=2;
       
        int v=k;
        while(mpp[v]!=0){
            v=k*i;
            if(mpp[v]==0){
                break;

            }
            i++;
        }

       return v;



        
    }
};