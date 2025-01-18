class Solution {
public:
    vector<int> singleNumber(vector<int>& n) {
        vector<int>a;
        map<int,int>m;
        for(int i:n)
        m[i]++;
        for(auto i=m.begin();i!=m.end();i++){
            if(i->second==1)
            a.push_back(i->first);
        }
        return a;
    }
};