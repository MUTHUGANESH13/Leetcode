class Solution {
public
    int xorOperation(int n, int s) {
    int i,k=s;
    s=s+2;
    for(i=1;in;i++)
    {
        k=k^s;
        s=s+2;
    }
    return k;
    }
};