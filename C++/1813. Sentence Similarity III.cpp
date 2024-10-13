class Solution {
public:
    vector<string> sv(string s){
        vector<string>a;
        string k="";
        for(char c:s){
            if(c==' '){
                a.push_back(k);
                k="";
            }
            else
            k+=c;
        }
        if(k!="")
        a.push_back(k);
        return a;
    }
    bool areSentencesSimilar(string s1, string s2) {
        vector<string>a1,a2;
        a1=sv(s1);
        a2=sv(s2);
        int m1=0,m2=0,n1=a1.size()-1,n2=a2.size()-1;
         while (m1 <= n1 && m2 <= n2) {
            if (a1[m1] == a2[m2]) {
                m1++;
                m2++;
            } else {
                break;
            }
        }
        while (n1 >= m1 && n2 >= m2) {
            if (a1[n1] == a2[n2]) {
                n1--;
                n2--;
            } else {
                break; 
            }
        }
        return (m1 > n1 || m2 > n2);
    }
};