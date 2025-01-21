class Solution {
public:
    bool validateStackSequences(vector<int>& p, vector<int>& d) {
        int i=0;
        vector<int>a;
        for(int x:p){
            a.push_back(x);
            if(a.back()==d[i]){
                while(i<d.size()){
            if(!a.empty() && a.back()==d[i]){
                i++;
                a.pop_back();
            }
            else
            break;
        }
            }
        }
        while(i<d.size()){
            if(a.back()==d[i]){
                i++;
                a.pop_back();
            }
            else
            return false;
        }
        return a.size()==0;
    }
};