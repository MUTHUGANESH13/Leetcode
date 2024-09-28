class Solution {
public:
    string reverseWords(string s) {
        vector<string> a;
        string b="";
        for(char c:s){
            if(c==' '){
            a.push_back(b);
            b="";
            }
            else
            b+=c;
        }
        a.push_back(b);
        b="";
        for(int i=0;i<a.size()-1;i++){
            reverse(a[i].begin(),a[i].end());
            b=b+a[i]+" ";
        }
        reverse(a[a.size()-1].begin(),a[a.size()-1].end());
        b+=a[a.size()-1];
        return b;
    }
};