class Solution {
    public int singleNumber(int[] n) {
        int i,s=0;
        for(i=0;i<n.length;i++)
        {
            s^=n[i];
        }
        return s;
    }
}