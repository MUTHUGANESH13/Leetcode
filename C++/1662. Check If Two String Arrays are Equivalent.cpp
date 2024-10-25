class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        string a,b;
        int i;
        for(i=0;i<w1.size();i++)
        {
            a+=w1[i];
        }
        for(i=0;i<w2.size();i++)
        {
            b+=w2[i];
        }
        return(a==b);
    }
};