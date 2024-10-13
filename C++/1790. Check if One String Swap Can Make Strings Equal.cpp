class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int i,c=0;
        vector<char>a;
        for(i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                a.push_back(s1[i]);
                a.push_back(s2[i]);
                if(a.size()>4)
                return false;
            }
        }
        if(a.size()==0)
        return true;
        if(a.size()==2)
        return false;
        return(a[0]==a[3] && a[1]==a[2]);
    }
};