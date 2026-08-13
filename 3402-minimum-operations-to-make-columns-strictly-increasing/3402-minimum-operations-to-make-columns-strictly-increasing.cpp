class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        int i=1;
        for(int j=0;j<m;j++){
          
            
            for( i=1;i<n;i++){
                int dif=grid[i][j]-grid[i-1][j];
                if(dif>0){
                    continue;

                }
                else{
                    ans=ans+abs(dif)+1;
                    grid[i][j]=grid[i][j]+abs(dif)+1;
                }

                
                

            }
        }
        return ans;
    }
};