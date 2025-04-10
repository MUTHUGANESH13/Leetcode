class Solution {
public:
    double minimumAverage(vector<int>& n) {
        double m=9999.9;
        sort(n.begin(),n.end());
        for(int i=0;i<n.size()/2;i++){
            m=min(m,(n[i]+n[n.size()-1-i])/2.0);
        }
        return m;
    }
};