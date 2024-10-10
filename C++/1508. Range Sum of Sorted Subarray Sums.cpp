class Solution {
public:
    int rangeSum(vector<int>& d, int n, int l, int r) {
        vector<int>a;
        long int i,j,s;
        for(i=0;i<n;i++)
        {
            s=0;
            for(j=i;j<n;j++)
            {
                s=s+d[j];
                a.push_back(s);
            }
        }
        sort(a.begin(),a.end());
        s=0;
        for(i=l-1;i<r;i++)
        {
            s+=a[i];
        }
        s=s%1000000007;
        return s;
    }
};