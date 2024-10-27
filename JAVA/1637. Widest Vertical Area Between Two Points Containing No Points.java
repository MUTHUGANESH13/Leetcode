class Solution {
    public int maxWidthOfVerticalArea(int[][] p) {
        int[] a=new int[p.length];
        int i,m=0;
        for(i=0;i<p.length;i++){
            a[i]=p[i][0];
        }
        Arrays.sort(a);
        for(i=0;i<a.length-1;i++){
            if((a[i+1]-a[i])>m)
            m=a[i+1]-a[i];
        }
        return m;
    }
}