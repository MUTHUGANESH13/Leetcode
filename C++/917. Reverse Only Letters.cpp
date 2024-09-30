class Solution {
public:
    bool is(char c){
        return(((int)c>=97 &&(int)c<=122)||((int)c>=65 &&(int)c<=90));
    }
    string reverseOnlyLetters(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            if(!is(s[i]))
            i++;
            if(!is(s[j]))
            j--;
            if(is(s[i]) && is(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};