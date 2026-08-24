class Solution {
public:
    int binary(vector<int>& s, vector<int>& p, long long success,int i){
        int low=0;
        int n=p.size();
        int high=n-1;
        while(low<=high){
            int  mid=low+(high-low)/2;
            long long value=(long long)i*p[mid];
            if(value>=success){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return n-low;
    }
    vector<int> successfulPairs(vector<int>& s, vector<int>& p, long long success) {
        sort(p.begin(),p.end());
        vector<int>ans;
        for(auto i: s){
            int value=binary(s,p,success,i);
            ans.push_back(value);

        }

       return ans; 
    }
};