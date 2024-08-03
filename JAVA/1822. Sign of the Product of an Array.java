class Solution {
    public int arraySign(int[] n) {
        int i,p=0;
        for(i=0;i<n.length;i++)
        {
            if(n[i]==0)
            return 0;
            else if(n[i]<0)
            p++;
            else 
            continue;
        }
        if(p%2!=0)
        return -1;
        return 1;
    }
}