class Solution {
public:
    int singleNumber(vector<int>& n) {
        map<int,int>m;
        for(int i:n){
            m[i]++;
        }
        for(auto i=m.begin();i!=m.end();i++){
            if(i->second==1)
            return i->first;
        }
        return 0;
    }
};