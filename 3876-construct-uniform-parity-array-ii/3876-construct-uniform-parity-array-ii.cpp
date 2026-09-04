class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        int noe=0;
        int noo=0;
        for(auto i: nums1){
            if((i & 1)!=0){
                noo++;

            }
            else{
                noe++;
            }
        }
        if(noo == n || noe==n ){
            return true;
        }
        sort(nums1.begin(),nums1.end());
        if(nums1[0] & 1 !=0){
            for(int i=1;i<n;i++){
                if(nums1[i] & 1 ==0){
                    nums1[i]=nums1[i]-nums1[0];
                }
            }
            return true;

        }
       return false;

       
    }
};