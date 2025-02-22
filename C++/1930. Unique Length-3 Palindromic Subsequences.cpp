class Solution {
public:
    int countPalindromicSubsequence(string s) {
        map<int,int>a;
        int c=0;
        for(int i=0;i<s.size()-2;i++){
            if(a[s[i]]!=-1){
            for(int j=s.size()-1;j>1;j--){
                if(s[i]==s[j]){
                    a[s[i]]=-1;
                    set<int>x;
                    for(int k=i+1;k<j;k++)
                    x.insert(s[k]);
                    c+=x.size();
                    break;
                }
            }
            }
        }
        return c;
    }
};