class Solution {
public:
    int maxAdjacentDistance(vector<int>& n) {
        int m=abs(n[0]-n.back());
        for(int i=0;i<n.size()-1;i++){
            m=max(m,abs(n[i]-n[i+1]));
        }
        return m;
    }
};