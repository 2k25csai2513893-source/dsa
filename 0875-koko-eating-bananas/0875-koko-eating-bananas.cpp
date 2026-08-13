class Solution {
public:
    long long time(vector<int>& piles,int hour){
        long long totalhour=0;
        for(auto i: piles){
            totalhour=totalhour+ceil((double)i/(double)hour);
        }
        return totalhour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            long long totalh=time(piles,mid);
            if(totalh<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }

};