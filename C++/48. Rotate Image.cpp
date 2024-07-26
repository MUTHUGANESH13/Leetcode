class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int i,j,t,g;
        for(i=0;i<m.size();i++)
        {
            for(j=i;j<m.size();j++)
            {
                t=m[i][j];
                m[i][j]=m[j][i];
                m[j][i]=t;
            }
        }
        for(i=0;i<m.size();i++)
        {
            g=m.size()-1;
            for(j=0;j<m.size()/2;j++)
            {
                t=m[i][j];
                m[i][j]=m[i][g];
                m[i][g]=t;
                g--;
            }
        }
    }
};