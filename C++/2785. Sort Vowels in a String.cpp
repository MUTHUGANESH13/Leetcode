class Solution {
public:
    bool is(char c){
        return(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    }
    string sortVowels(string s) {
        vector<char>a;
        for(int i=0;i<s.size();i++){
            if(is(s[i])==true){
                a.push_back(s[i]);
                s[i]='#';
            }
        }
        sort(a.begin(),a.end());
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='#'){
                s[i]=a.back();
                a.pop_back();
            }
        }
        return s;
    }
};