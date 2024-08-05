class Solution {
public:
    int countSeniors(vector<string>& d) {
        int i,n=0;
        string a;
        for(i=0;i<d.size();i++)
        {
            a="";
            a=a+d[i][11];
            a=a+d[i][12];
            if(stoi(a)>60)
            n++;
        }
    return n;
    }
};