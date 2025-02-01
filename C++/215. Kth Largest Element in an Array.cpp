class Solution {
public:
    int findKthLargest(vector<int>& n, int k) {
        priority_queue<int>p(n.begin(),n.end());
        k--;
        k%=p.size();
        for(int i=0;i<k;i++)
        p.pop();
        return p.top();
    }
};