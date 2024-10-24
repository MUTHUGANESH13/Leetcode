class Solution {
public:
    int minOperations(vector<string>& l) {
        int i,n=0;
        for(i=0;i<l.size();i++)
        {
            if(n<0)
        n=0;
            if(l[i]=="../")
            {
                n--;
            }
            else if(l[i]=="./")
            {
                continue;
            }
            else
            n++;
        }
        if(n<=0)
        n=0;
        return n;
    }
};