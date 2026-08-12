class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mpp;
        for(auto i: arr){
            mpp[i]++;
        }
        unordered_map<int,int>mpp2;
        for(auto it: mpp){
            mpp2[it.second]++;
        }
        for(auto it: mpp2){
            if(it.second>1){
                return false;
            }
        }
        return true;
    }
};