class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int i=0;
        int j=0;
        vector<int> temp;
        while(i<n && j<m){
            if(nums1[i]<=nums2[j]){
                temp.push_back(nums1[i]);
                i++;
            }
            else{
                temp.push_back(nums2[j]);
                j++;

            }
        }
        while(i<n){
            temp.push_back(nums1[i]);
            i++;

        }
        while(j<m){
            temp.push_back(nums2[j]);
            j++;

        }

        double ans=0;
        int s=temp.size();
        if(s%2!=0){
            ans=temp[s/2];
        }
        else{
            int x=s/2;
            ans=(double)(temp[x]+temp[x-1])/2;

        }
        return ans;
        
    }
};