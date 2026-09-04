class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        
        for(int i=0;i<n;i++){
            int xr=arr[i];
            for(int j=i+1;j<n;j++){
                xr=xr^arr[j];
                if(xr==0){
                    ans+=(j-i);
                }
            }
        }
        return ans;
    }
};