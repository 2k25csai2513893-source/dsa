class Solution {
public:
    bool verify(string s,unordered_map<int,int>&mpp){
        for(auto ch:s){
            if(mpp.find(ch)==mpp.end()){
                return false;
            }
        }
        return true;
    }
    vector<string> findWords(vector<string>& words) {
        int l=words.size();
        unordered_map<int,int>mpp1;
        unordered_map<int,int>mpp2;
        unordered_map<int,int>mpp3;
        string s1="qwertyuiopQWERTYUIOP";
        for(auto ch:s1){
            mpp1[ch]++;
        }
        string s2="asdfghjklASDFGHJKL";
        for(auto ch: s2){
            mpp2[ch]++;
        }
        string s3="zxcvbnmZXCVBNM";

        for(auto ch: s3){
            mpp3[ch]++;
        }
        vector<string> ans;
        for(auto s:words){
            if(mpp1[s[0]]>=1){
                
               if(verify(s,mpp1)){
                 ans.push_back(s);
               }
               
            }
            if(mpp2[s[0]]>=1){
                
               if(verify(s,mpp2)){
                 ans.push_back(s);
               }
               
            }
            if(mpp3[s[0]]>=1){
                
               if(verify(s,mpp3)){
                 ans.push_back(s);
               }
               
            }
        }

        return ans;
    }
};