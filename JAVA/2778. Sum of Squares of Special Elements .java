class Solution {
    public int sumOfSquares(int[] n) {
        int s=0,i;
        for(i=0;i<n.length;i++){
            if(n.length%(i+1)==0)
            s=s+(n[i]*n[i]);
        }
        return s;
    }
}