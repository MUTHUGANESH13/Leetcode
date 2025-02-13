class Solution {
public:
    vector<int>a;
    Solution(vector<int>& nums) {
        a=nums;
    }
    
    vector<int> reset() {
        return a;
    }
    
    vector<int> shuffle() {
        vector<int>x(a.begin(),a.end());
        for(int i=0;i<a.size();i++)
        swap(x[i],x[rand()%a.size()]);
        return x;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */