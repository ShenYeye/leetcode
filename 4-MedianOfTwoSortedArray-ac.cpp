class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(),n = nums2.size();
        if(m > n) return findMedianSortedArrays(nums2,nums1);
        int i,j,imin = 0,imax = m,half = (m + n + 1) >> 1,num1,num2;
        while(imin <= imax){
            i = (imin + imax) >> 1;
            j = half - i;
            if(i < m && j > 0 && nums2[j - 1] > nums1[i]) imin = i + 1;
            else if(i > 0 && j < n && nums1[i - 1] > nums2[j]) imax = i - 1;
            else{
                if(i == 0) num1 = nums2[j - 1];
                else if(j == 0) num1 = nums1[i - 1];
                else num1 = max(nums1[i - 1],nums2[j - 1]);
                break;
            }
        }
        if(((m + n) & 1)) return num1;
        if(i == m) num2 = nums2[j];
        else if(j == n) num2 = nums1[i];
        else num2 = min(nums1[i],nums2[j]);
        return (num1 + num2) / 2.;
    }
};
