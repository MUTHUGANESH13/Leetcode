class Solution {
    public int maxChunksToSorted(int[] a) {
        int c=0,m=-1;
        for(int i=0;i<a.length;i++){
            m=Math.max(m,a[i]);
            if(m==i)
            c++;
        }
        return c;
    }
}