class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size();
        int m = nums2.size();

        int s = n + m;

        int idx1 = s / 2;
        int idx2 = idx1 - 1;

        int i = 0;
        int j = 0;

        int ide1 = -1;
        int ide2 = -1;

        int c = 0;

        while(i < n && j < m) {

            if(nums1[i] < nums2[j]) {

                if(c == idx1)
                    ide1 = nums1[i];

                if(c == idx2)
                    ide2 = nums1[i];

                i++;
                c++;
            }
            else {

                if(c == idx1)
                    ide1 = nums2[j];

                if(c == idx2)
                    ide2 = nums2[j];

                j++;
                c++;
            }
        }

        while(i < n) {

            if(c == idx1)
                ide1 = nums1[i];

            if(c == idx2)
                ide2 = nums1[i];

            i++;
            c++;
        }

        while(j < m) {

            if(c == idx1)
                ide1 = nums2[j];

            if(c == idx2)
                ide2 = nums2[j];

            j++;
            c++;
        }

        if(s % 2 == 0) {
            return ((double)ide1 + ide2) / 2.0;
        }

        return ide1;
    }
};