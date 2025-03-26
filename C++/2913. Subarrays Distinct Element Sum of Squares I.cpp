class Solution {
public:
    int sumCounts(vector<int>& n) {
        int c=0;
        for(int i=0;i<n.size();i++){
            set<int>s;
            for(int j=i;j<n.size();j++){
                s.insert(n[j]);
                c+=s.size()*s.size();
            }
        }
        return c;
    }
};