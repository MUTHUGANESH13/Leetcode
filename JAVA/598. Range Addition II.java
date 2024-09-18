class Solution {
    public int maxCount(int m, int n, int[][] o) {
        int i,r=m,c=n;
        for(i=0;i<o.length;i++){
            r=Math.min(r,o[i][0]);
            c=Math.min(c,o[i][1]);
        }
        return(r*c);
    }
}