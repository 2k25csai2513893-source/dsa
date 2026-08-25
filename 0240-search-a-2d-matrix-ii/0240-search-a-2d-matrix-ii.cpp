class Solution {
public:
    bool search(vector<int> &vec,int target){
        int n=vec.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(vec[mid]==target){
                return true;
            }
            else{
                if(vec[mid]>target){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size();
        for(int i=0;i<n;i++){
            if(search((mat[i]),target)){
                return true;
            }
        }
        return false;
    }
};