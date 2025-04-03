class Solution {
public:
    int longestMonotonicSubarray(vector<int>& n) {
        int w=1,m=0;
        for(int i=0;i<n.size()-1;i++){
            if(n[i]<n[i+1])
            w++;
            else{
                m=max(m,w);
                w=1;
            }
        }
        m=max(m,w);
        w=1;
        for(int i=0;i<n.size()-1;i++){
            if(n[i]>n[i+1])
            w++;
            else{
                m=max(m,w);
                w=1;
            }
        }
        m=max(m,w);
        return m;
    }
};