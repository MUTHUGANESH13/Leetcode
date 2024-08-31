class Solution {
public:
    int kthFactor(int n, int k) {
        int i,f=0;
        if (n==k && (n==1||n==2))
            return k;
        else if(n<=k)
        return -1;
        else {
            for (i = 1; i <= n; i++)
            {
                if(n%i==0)
                {
                    f++;
                    if(f==k)
                    return i;
                }
            }
        }
        return -1;
    }
};