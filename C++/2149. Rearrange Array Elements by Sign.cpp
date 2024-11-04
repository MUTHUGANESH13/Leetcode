class Solution {
public:
    vector<int> rearrangeArray(vector<int>& n) {
        vector<int>a,b;
        for(int i:n){
            if(i<0)
            b.push_back(i);
            else
            a.push_back(i);
        }
        n.clear();
        for(int i=0;i<a.size();i++){
            n.push_back(a[i]);
            n.push_back(b[i]);
        }
        return n;
    }
};