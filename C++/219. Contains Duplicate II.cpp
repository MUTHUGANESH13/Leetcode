class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& n, int k) {
        for(int i=0;i<n.size();i++)
        {
            for(int j=i+1;j<=i+1+k && j<n.size();j++)
            {
                if(n[i]==n[j])
                {
                    if(abs(i-j)<=k)
                    return true;
                }
            }
        }
         return false;
    }
};