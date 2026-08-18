class Solution {
public:
    bool canweput(vector<int>& pos,int dis,int m){
        int n=pos.size();
        int count=1;
        int last=pos[0];
        for(int i=1;i<n;i++){
            if(pos[i]-last>=dis){
                count++;
                last=pos[i];
            }
            if(count>=m){
                return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int>& pos, int m) {
        sort(pos.begin(),pos.end());
        int low=1;
        int high=(*max_element(pos.begin(),pos.end()))-(*min_element(pos.begin(),pos.end()));
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canweput(pos,mid,m)){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
};