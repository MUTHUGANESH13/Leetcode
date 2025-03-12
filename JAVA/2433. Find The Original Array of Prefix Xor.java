class Solution {
    public int[] findArray(int[] p) {
        if(p.length==1)
        return p;
        int a[]=new int[p.length];
        a[0]=p[0];
        for(int i=0;i<p.length-1;i++){
            a[i+1]=p[i]^p[i+1];
        }
        return a;
    }
}