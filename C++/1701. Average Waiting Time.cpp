class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& c) {
        int i,j,s=c[0][0]+c[0][1];
        double w=s-c[0][0];
        for(i=1;i<c.size();i++)
        {
            if(s>=c[i][0])
           {s=s+c[i][1];
            w=w+(s-c[i][0]);}
            else
           {
            s=c[i][0]+c[i][1];
            w=w+(s-c[i][0]);
           }

        }
        double h=w/c.size();
        return(h);
    }
};