class Solution {
    public int maximumCount(int[] N) {
        int p=0,n=0;
        for(int i:N){
            if(i>0)p++;
            else if(i<0)n++;
        }
        return(Math.max(p,n));
    }
}