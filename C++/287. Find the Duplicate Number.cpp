class Solution {
public:
    int findDuplicate(vector<int>& n) {
        sort(n.begin(),n.end());
        for(int i=0;i<n.size()-1;i++)
        {
            if(n[i]==n[i+1])
            return n[i];
        }
        return 0;
    }
};