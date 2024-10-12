class Solution {
public:
    string removeStars(string s) {
        vector<char>a;
        for(char c:s){
            if(c=='*'){
                if(a.size()!=0)
                a.pop_back();
            }
            else
            a.push_back(c);

        }
        string b="";
        for(char c:a){
            b+=c;
        }
        return b;
    }
};