class Solution {
public:
    int strStr(string h, string n) {
        if(h.size()<n.size())
        return -1;
        else{
        for(int i=0;i<h.size()-n.size()+1;i++)
        {
            if(h.substr(i,n.size())==n)
            {
                return i;
                break;
            }
        }}
        return -1;
    }
};