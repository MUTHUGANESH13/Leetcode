class Solution {
    public char findKthBit(int n, int k) {
        if(n==1)
        return '0';
        int l,m;
        l=(1<<n)-1;
        m=l/2+1;
        if(k==m)
        return '1';
        else if(k<m)
        return findKthBit(n-1,k);
        else
        return findKthBit(n-1,m-k+m)=='0'?'1':'0';
    }
}