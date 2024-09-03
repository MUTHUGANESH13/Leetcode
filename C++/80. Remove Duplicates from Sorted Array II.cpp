class Solution {
public:
    int removeDuplicates(vector<int>& n) {
        if(n.size()<=2)return n.size();
        int i,l=2;
        for(i=2;i<n.size();i++)
        {
                if(n[i]!=n[l-2]){
                    n[l++]=n[i];
                } 
        }
        return l;
    }
};