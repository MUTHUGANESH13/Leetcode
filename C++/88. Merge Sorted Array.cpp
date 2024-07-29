class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i;
        for(i=nums1.size()-1;i>m-1;i--)
        {
            nums1.pop_back();
        }
        for(i=0;i<n;i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
    }
};