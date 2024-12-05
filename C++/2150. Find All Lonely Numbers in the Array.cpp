class Solution {
public:
    vector<int> findLonely(vector<int>& n) {
        vector<int>a;
        sort(n.begin(),n.end());
        for(int i=0;i<n.size();i++){
            if((i==0||n[i]-n[i-1]>1)&&(i==n.size()-1||n[i+1]-n[i]>1))
            a.push_back(n[i]);
        }
        return a;
    }
};