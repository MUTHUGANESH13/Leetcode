class Solution {
    public int distributeCandies(int[] c) {
        int i,n=1;
        Arrays.sort(c);
        for(i=0;i<c.length-1;i++){
            if(c[i]!=c[i+1])
            n++;
        }
        return c.length/2>n?n:c.length/2;
    }
}