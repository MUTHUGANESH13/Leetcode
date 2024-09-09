class Solution {
public:
    int calPoints(vector<string>& a) {
        vector<int>d;
        int x,y,i;
        for(i=0;i<a.size();i++)
        {
            if(a[i]=="+")
            {
                x=d[d.size()-1];
                y=d[d.size()-2];
                d.push_back(x+y);

            }
            else if(a[i]=="D")
            {
                x=d[d.size()-1];
                d.push_back(x*2);
            }
            else if(a[i]=="C")
            {
                d.pop_back();
            }
            else
            {
                x=stoi(a[i]);
                d.push_back(x);
            }
        }
    return(accumulate(d.begin(), d.end(), 0));
    }
};