class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        int noe=0;
        int noo=0;
        for(auto i: nums1){
            if(i%2==0 ){
                noe++;
            }
            else{
                noo++;
            }
        }
        if(n==noe || noo){
            return true;
        }
        map<int,int>mpp;
        for(auto i: nums1){
            mpp[i]++;
        }
        if(mpp.size()==1){
            return true;
        }
        return true;
        
        

        
    }
};