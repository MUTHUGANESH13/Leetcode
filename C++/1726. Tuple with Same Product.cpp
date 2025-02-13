class Solution {
public:
    int tupleSameProduct(vector<int>& n) {
        if(n.size()<4)
        return 0;
        map<int,int>m;
        int c=0;
        for(int i=0;i<n.size();i++){
            for(int j=i+1;j<n.size();j++){
                m[n[i]*n[j]]++;
            }
        }
        for(auto i=m.begin();i!=m.end();i++){
            c+=8*((i->second-1)*i->second/2);
        }
        return c;

    }
};