class Solution {
public:
    bool all(string s,unordered_map<char,int>mpp){
        for(auto ch:s){
            if(mpp[ch]==0){
                return false;
            }
        }
        return true;
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int>mpp;
        for(auto ch :allowed){
            mpp[ch]++;
        }
        int ans=0;
        for(auto s: words){
            if(all(s,mpp)){
                ans+=1;
            }

        }
        return ans;
    }
};