class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& a) {
        if(a.size()==2)
        return true;
        sort(a.begin(),a.end());
        int i;
        for(i=1;i<a.size()-1;i++)
        {
            if(a[i]-a[i+1]!=a[i-1]-a[i])
            {
                return false;
                break;
            }
        }
        return true;
    }
};