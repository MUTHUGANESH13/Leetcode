class Solution {
public:
    int dominantIndex(vector<int>& n) {
        int i,m=-1,k;
        for(i=0;i<n.size();i++){
            if(m<n[i]){
                m=n[i];
                k=i;
            }
        }
        sort(n.rbegin(),n.rend());
        if(n[0]<2*n[1])
        return -1;
        return k;
    }
};