class Solution {
public:
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        unordered_set<char>a={'a','e','i','o','u','A','E','I','O','U'};
        while(i<j){
            if(a.count(s[i])==0)
            i++;
            if(a.count(s[j])==0)
            j--;
            if(a.count(s[i])!=0 && a.count(s[j])!=0){
                swap(s[i],s[j]);
                i++;
                j--;

            }
        }
        return s;
    }
};