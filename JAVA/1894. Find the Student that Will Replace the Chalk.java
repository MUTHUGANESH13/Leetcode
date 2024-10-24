class Solution {
    public int chalkReplacer(int[] c, int k) {
        int i;
        long s=0;
        for(i=0;i<c.length;i++){
            s+=c[i];
        }
        s=k%s;
        for(i=0;i<c.length;i++){
            if(s<0)
            return (i-1);
            s-=c[i];
        }
        return i-1;
    }
}