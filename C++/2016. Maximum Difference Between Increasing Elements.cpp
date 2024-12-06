class Solution {
public:
    int maximumDifference(vector<int>& n) {
        int m=-1;
        for(int i=0;i<n.size();i++){
            for(int j=i+1;j<n.size();j++){
                if(m<(n[j]-n[i])&&(n[j]-n[i])>0)
                m=n[j]-n[i];
            }
        }
        return m;
    }
};