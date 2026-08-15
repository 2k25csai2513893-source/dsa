class Solution {
public:
    bool possible(vector<int>& weights,int cap,int days){
        int n=weights.size();
        int sum=0;
        int d=1;
        for(int i=0;i<n;i++){
            
            if(sum+weights[i]>cap){
                sum=weights[i];
               
                d+=1;
                
            }
            else{
                sum+=weights[i];
            }
           
        }
        if(d<=days){
            return 1;
        }
        return 0;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        for(auto i: weights){
            high+=i;
        }
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(weights,mid,days)){
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