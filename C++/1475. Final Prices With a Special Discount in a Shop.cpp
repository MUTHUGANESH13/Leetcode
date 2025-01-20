class Solution {
public:
    vector<int> finalPrices(vector<int>& p) {
        vector<int>a=p;
        vector<int>b;
        for(int i=0;i<p.size();i++){
            while(!b.empty() && p[b.back()]>=p[i]){
                a[b.back()]-=p[i];
                b.pop_back();
            }
            b.push_back(i);
        }
        return a;
    }
};