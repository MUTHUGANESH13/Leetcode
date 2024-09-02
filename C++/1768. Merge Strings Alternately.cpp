class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        string a="";
        int l1=0,l2=0;
        while(l1!=w1.size() || l2!=w2.size())
        {
            if(l1==w1.size())
                a=a+w2[l2++];       
            else if(l2==w2.size())
                a=a+w1[l1++];
            else
            {
                a=a+w1[l1++];
                a=a+w2[l2++];
            }
        }
        return a;
    }
};