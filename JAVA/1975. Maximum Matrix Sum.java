class Solution {
    public long maxMatrixSum(int[][] m) {
        long c=0;
        int s=Integer.MAX_VALUE,n=0;
        for(int i=0;i<m.length;i++){
            for(int j:m[i]){
                c+=Math.abs(j);
                if(j<0)
                n++;
                s=Math.min(s,Math.abs(j));
            }
        }
        if(n%2==1)
        c-=2*s;
        return c;
    }
}