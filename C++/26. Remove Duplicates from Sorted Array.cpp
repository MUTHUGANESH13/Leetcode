class Solution {
public:
    int removeDuplicates(vector<int>& n) {
        int i,l=1;
        for(i=0;i<n.size()-1;i++)
        {
            if(n[i]!=n[i+1])
            {
                n[l++]=n[i+1];
            }
        }   
        return l;  
    }
};