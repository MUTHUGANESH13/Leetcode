class Solution {
public:
    string kthDistinct(vector<string>& a, int k) {
        unordered_map<string, int>x;
        int i,c=0;
        for(i=0;i<a.size();i++)
        {
            x[a[i]]++;
        }
        for(i=0;i<a.size();i++)
        {
            if(x[a[i]]==1)
            {
                c++;
                if(c==k){}
                return(a[i]);
            }
        }
        return "";
    }
};