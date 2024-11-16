class Solution {
public:
    vector<int> separateDigits(vector<int>& n) {
        int i;
        vector<int>a;
        for(i=0;i<n.size();i++){
            if(n[i]>9){
                string s=to_string(n[i]);
                for(int j=0;j<s.size();j++){
                    a.push_back(s[j]-'0');
                }
            }
            else
            a.push_back(n[i]);
        }
        return a;
    }
};