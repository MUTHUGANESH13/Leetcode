class Solution {
public:
    int missingNumber(vector<int>& n) {
        int i,k=-1;
        sort(n.begin(),n.end());
        for(i=0;i<n.size();i++)
        {
            if(i!=n[i])
            {k=i;
            break;}
        }
        if(k==-1)
        k=(n.size());
        return k;
    }
};