class Solution {
public:
    vector<int> decode(vector<int>& e, int f) {
        vector<int>a(e.size()+1);
        a[0]=f;
        for(int i=0;i<e.size();i++){
            a[i+1]=a[i]^e[i];
        }
        return a;
    }
};