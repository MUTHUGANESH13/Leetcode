class Solution {
public:
    vector<int> findErrorNums(vector<int>& n) {
        map<int,int>m;
        vector<int>a;
        for(int i:n){
        m[i]++;
        if(m[i]==2)
        a.push_back(i);
        }
        for(int i=1;i<=n.size();i++){
            if(m[i]==0){
                a.push_back(i);
                break;
            }
        }
        return a;
    }
};