class Solution {
    public int maxOperations(int[] n) {
        int c=1,s=n[0]+n[1];
        for(int i=2;i<n.length-1;i+=2){
            if(n[i]+n[i+1]==s)
            c++;
            else
            break;
        }
        return c;
    }
}