class Solution {
    public int[] successfulPairs(int[] s, int[] p, long t) {
        int[] a=new int[s.length];
        Arrays.sort(p);
        for(int i=0;i<s.length;i++){
            int l=0,r=p.length;
            while(l<r){
                int m=l+(r-l)/2;
                if((long)s[i]*p[m]>=t)
                r=m;
                else
                l=m+1;
            }
            a[i]=p.length-l;
        }
        return a;
    }
}