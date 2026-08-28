class Solution {
public:
    bool checkIfPangram(string sent) {
        unordered_map<int,int>mpp;
        for(auto ch :sent){
            
            mpp[ch]++;
        }
        if(mpp.size()>=26){
            return true;
        }
        return false;
    }
};