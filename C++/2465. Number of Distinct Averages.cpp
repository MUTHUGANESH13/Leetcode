class Solution {
public:
    int distinctAverages(vector<int>& n) {
        set<int>s;
        sort(n.begin(),n.end());
        for(int i=0;i<n.size()/2;i++){
            s.insert(n[i]+n[n.size()-1-i]);
        }
        return s.size();
    }
};