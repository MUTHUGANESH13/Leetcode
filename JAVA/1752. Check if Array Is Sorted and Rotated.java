class Solution {
    public boolean check(int[] n) {
        int c=0;
        for(int i=0;i<n.length-1;i++){
            if(n[i]>n[i+1])
            c++;
        }
        if(n[0]<n[n.length-1])
        c++;
        return c<=1;
    }
}