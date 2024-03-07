class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>keep;
        for(int i=0;i<n;i++)
        {
            keep.push_back(nums1[i]);
        }
        for(int i=0;i<m;i++)
        {
            keep.push_back(nums2[i]);
        }
        //sob ekhn vector e ;
        //sort kri
        sort(keep.begin(),keep.end());
        //dn
        int sz=keep.size();
        if(sz%2==1)
        {
            return double(keep[sz/2]);
        }
        else
        {
            int m1=keep[sz/2-1];
            int m2=keep[sz/2];
            return double(m1+m2)/2;
        }
    }
    
};
// https://leetcode.com/problems/median-of-two-sorted-arrays/description/