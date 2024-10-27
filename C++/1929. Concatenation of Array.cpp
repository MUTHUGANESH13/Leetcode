class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> k;
        int i;
        for(i=0;i<nums.size();i++)
        {
            k.push_back(nums[i]);
        }
        for(i=0;i<nums.size();i++)
        {
            k.push_back(nums[i]);
        }
        return(k);
    }
};