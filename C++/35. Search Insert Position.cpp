class Solution {
public:
    int searchInsert(vector<int>& n, int t) {
        if(n[0]==t)
        return 0;
        else if(n[0]>t)
        return 0;
        else
        {
            for(int i=0;i<n.size()-1;i++)
            {
                if(n[i+1]==t)
                return i+1;
                else if(n[i]<t && n[i+1]>t)
                return i+1;
                else 
                continue;
            }
        }
        return n.size();
    }
};