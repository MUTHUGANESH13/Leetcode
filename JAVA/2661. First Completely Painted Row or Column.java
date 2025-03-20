class Solution {
    public int firstCompleteIndex(int[] a, int[][] m) {
        int[] r=new int[m.length*m[0].length+1];
        int[] c=new int[m.length*m[0].length+1];
        int[] x=new int[m.length];
        int[] y=new int[m[0].length];
        for(int i=0;i<m.length;i++){
            for(int j=0;j<m[0].length;j++){
                r[m[i][j]]=i;
                c[m[i][j]]=j;
            }
        }
        for(int i=0;i<a.length;i++){
            if(++x[r[a[i]]]==m[0].length)
            return i;
            if(++y[c[a[i]]]==m.length)
            return i;
        }
        return -1;
    }
}