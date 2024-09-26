class Solution {
    public int[] applyOperations(int[] n) {
         int i,l=0;
        for(i=0;i<n.length-1;i++)
        {
            if(n[i]==n[i+1])
            {
                n[i]=n[i]*2;
                n[i+1]=0;
            }
            else
            continue;
        }
        for(i=0;i<n.length;i++)
        {
            if(n[i]!=0)
            {
                n[l++]=n[i];
            }
        }
        while(l<n.length)
        {
            n[l++]=0;
        }
        return n;
    }
}