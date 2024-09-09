class Solution {
public:
    int arraySign(vector<int>& n) {
        int i,N=0;
        for(i=0;i<n.size();i++)
        {
            if(n[i]==0)
            return 0;
            else if(n[i]<0)
            N++;
            else
            continue;
        }
        if(N%2!=0)
        return -1;
        return 1;
    }
};