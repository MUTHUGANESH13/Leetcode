class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& n) {
        vector<int>e,o;
        int i;
        for(i=0;i<n.size();i++){
            if(i%2==0)
            e.push_back(n[i]);
            else
            o.push_back(n[i]);
        }
        n.clear();
        sort(e.rbegin(),e.rend());
        sort(o.begin(),o.end());
        while(!o.empty()||!e.empty()){
            if(!e.empty()){
                n.push_back(e.back());
                e.pop_back();
            }
            if(!o.empty()){
                n.push_back(o.back());
                o.pop_back();
            }
        }
        return n;
    }
};