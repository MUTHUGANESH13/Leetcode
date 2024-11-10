class Solution {
public:
    vector<string> sortPeople(vector<string>& n, vector<int>& h) {
        vector<pair<int,string>>p;
        int i;
        vector<string>l(n.size());
        for(i=0;i<n.size();i++)
        {
            p.push_back(make_pair(h[i],n[i]));
        }
        sort(p.begin(),p.end(),greater<pair<int, string>>());
        for(i=0;i<n.size();i++)
        {
            l[i]=p[i].second;
        }
    return(l);
    }
};