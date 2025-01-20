class Solution {
public:
    int minOperations(vector<int>& n, vector<int>& g) {
        sort(n.begin(),n.end());
        int r=g[0];
        for(int i=1;i<g.size();i++){
            r=gcd(r,g[i]);
        }
        for(int i=0;i<n.size();i++){
            if(r%n[i]==0)
            return i;
        }
        return -1;   
    }
};