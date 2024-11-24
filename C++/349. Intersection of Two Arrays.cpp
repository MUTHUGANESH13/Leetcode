class Solution {
public:
    vector<int> intersection(vector<int>& n1, vector<int>& n2) {
        set<int>a(n1.begin(),n1.end());
        set<int>b(n2.begin(),n2.end());
        vector<int>x;
        for(int i:a){
            for(int j:b){
                if(i==j){
                    x.push_back(i);
                    break;
                }
            }
        }
        return x;
    }
};