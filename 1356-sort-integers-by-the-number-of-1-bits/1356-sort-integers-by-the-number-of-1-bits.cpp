class Solution {
public:
    int noo(int n){
        int c=0;
        while(n!=0){
            c++;
            n=n&n-1;
        }
        return c;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<int>ans;
        map<int,vector<int>>mpp;
        for(auto i: arr){
            int value=(noo(i));
            mpp[value].push_back(i);
        }
        for(auto it: mpp){
            sort(it.second.begin(),it.second.end());
            for(auto i: it.second){
                ans.push_back(i);
            }
        }
        
        return ans;
       
        

        
    }
};