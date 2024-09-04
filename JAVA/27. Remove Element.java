class Solution {
    public int removeElement(int[] n, int v) {
        int l=0,i;
        for(i=0;i<n.length;i++)
        {
            if(n[i]!=v)
            {
                n[l++]=n[i];
            }
        }
       return l;
    
    }
}