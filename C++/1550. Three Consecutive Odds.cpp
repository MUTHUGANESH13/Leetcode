class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& a) {
        for(int i=1;i<a.size()-1;i++)
        {
            if((a[i-1]%2==1 && a[i]%2==1 && a[i+1]%2==1)==1)
            {
                return true;
            }
        }
        return false;
    }
};