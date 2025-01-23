class Solution {
    public int maxChunksToSorted(int[] a) {
        int c=0;
        int[] b=a.clone();
        Arrays.sort(b);
        long s1=0,s2=0;
        for(int i=0;i<a.length;i++){
            s1+=a[i];
            s2+=b[i];
            if(s1==s2)
            c++;
        }
        return c;
    }
}