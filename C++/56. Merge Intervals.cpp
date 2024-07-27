class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& t) {
    vector<vector<int>> a,b;
    int i;
    sort(t.begin(),t.end());
    b.push_back(t[0]);
    a.push_back(t[0]);
    for(i=1;i<t.size();i++)
    {
        if(a[a.size()-1][1]>=t[i][0])
        {
            b[0][0]=a[a.size()-1][0];
            b[0][1] = std::max(a.back()[1], t[i][1]);
            a.pop_back();
            a.push_back(b[0]);
        }
        else
        a.push_back(t[i]);
    }
    return a;
    }
};