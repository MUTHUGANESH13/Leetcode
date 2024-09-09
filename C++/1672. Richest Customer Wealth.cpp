class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        int m=0,i,j,s;
        for(i=0;i<a.size();i++)
        {
            s=0;
            for(j=0;j<a[i].size();j++)
            {
                s+=a[i][j];
            }
            if(m<s)
            m=s;
        }
        return m;
    }
};