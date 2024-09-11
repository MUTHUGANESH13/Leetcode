class Solution {
public:
    char nextGreatestLetter(vector<char>& L, char t) {
        int l=0,h=L.size()-1,m;
        if(t<L[0]||t>=L[L.size()-1])
        return L[0];
        char a;
        while(l<=h){
            m=(l+h)/2;
            if(L[m]>t){
                a=L[m];
                h=--m;
            }
            else
            l=++m;
        }
        return a;
    }
};