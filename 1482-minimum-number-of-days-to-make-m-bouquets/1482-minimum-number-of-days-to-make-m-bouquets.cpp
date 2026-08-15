class Solution {
public:
    bool daypossible(vector<int>& bloom,int d,int m,int k){
        int c=0;
        int noboq=0;
        for(auto i: bloom){
            if(i<=d){
                c++;
            }
            else{
                noboq+=(c/k);
                c=0;
            }
        }
        noboq+=(c/k);
        if(noboq>=m){
            return 1;

        }
        return 0;
    }
    int minDays(vector<int>& bloom, int m, int k) {
        int n=bloom.size();
        if(n<((long long) m*k)){
            return -1;
        }
        int ans=-1;
        int low=*min_element(bloom.begin(),bloom.end());
        int high=*max_element(bloom.begin(),bloom.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            if(daypossible(bloom,mid,m,k)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
       
        return ans;
    }
};