class Solution {
public:
    string clearDigits(string s) {
        vector<char>a;
        for(char c:s){
            if(c<='9'&&c>='0')
            a.pop_back();
            else
            a.push_back(c);
        }
        string k="";
        for(char c:a)
        k+=c;
        return k;
    }
};