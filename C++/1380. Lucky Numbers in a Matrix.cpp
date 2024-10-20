class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& m) {
        int i,j,min,max,n=0;
        vector<int> x;
        for(i=0;i<m.size();i++)
        {
            min=m[i][0];
            for(j=0;j<m[i].size();j++)
            {
                if(min>m[i][j])
                {
                    min=m[i][j];
                    n=j;
                }
            }
            max=min;
            for(j=0;j<m.size();j++)
            {
                if(m[j][n]>max)
                {
                    max=m[j][n];
                }
            }
            if(max==min)
            {
                x.push_back(min);
            }
        }
        return x;
    }
};