class Solution {
public:
    int countPairs(vector<int>& n, int k) {
        int c=0;
        for(int i=0;i<n.size();i++){
            for(int j=i+1;j<n.size();j++){
                if(n[i]==n[j] && (i*j)%k==0)
                c++;
            }
        }
        return c;
    }
};