class Solution {
    public boolean containsPattern(int[] a, int m, int k) {
        int c=0;
        for(int i=0,j=i+m;j<a.length;i++,j++)
        {
            if(a[i]!=a[j])
            c=0;
            else{
                c++;
                if(c>=(k-1)*m)
                return true;
            }
        }
        return false;
    }
}