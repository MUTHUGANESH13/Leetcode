class Solution {
public:
    int findLucky(vector<int>& a) {
        map<int,int>m;
        int v=-1;
        for(int i:a){
            m[i]++;
        }
        for(const auto& p:m){
            if(p.first==p.second){
                if(p.first>v)
                v=p.first;
            }
        }
        return v;
    }
};