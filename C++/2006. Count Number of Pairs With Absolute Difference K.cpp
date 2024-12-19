class Solution {
public:
    int countKDifference(vector<int>& n, int k) {
        int c=0;
        for(int i=0;i<n.size();i++){
            for(int j=i+1;j<n.size();j++){
                if(abs(n[i]-n[j])==k)
                c++;
            }
        }
        return c;
    }
};