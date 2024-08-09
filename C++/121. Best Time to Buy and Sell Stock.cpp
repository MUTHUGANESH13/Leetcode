
class Solution {
public:
    int maxProfit(vector<int>& p) {
        int i,min=p[0],m=0;
        for(i=1;i<p.size();i++)
        {
            if(p[i]<min)
            min=p[i];
            else
            m=max(m,p[i]-min);
        }
        return m;
    }
};