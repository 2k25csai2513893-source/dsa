class Solution {
public:
  
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=queries.size();
        vector<int>ans;
       
        
        for(int i=1;i<arr.size();i++){
            arr[i]=arr[i-1]^arr[i];
        }
        for(int i=0;i<n;i++){
            int l=queries[i][0];
            int h=queries[i][1];
            if(l==0){
                ans.push_back(arr[h]);

            }
            else{
                ans.push_back(arr[h]^(arr[l-1]));
            }
        }
       
        return ans;
    }
};