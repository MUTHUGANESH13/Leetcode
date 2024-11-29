class Solution {
public:
    int minAddToMakeValid(string s) {
        int l=0,r=0;
        for(char c:s){
            if(c=='(')
            l++;
            else{
                if(l==0)
                r++;
                else
            l--;}
        }
         return l+r;
    }
};