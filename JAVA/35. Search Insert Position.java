class Solution {
    public int searchInsert(int[] n, int t) {
        if(n[0]==t)
        return 0;
        else if(n[0]>t)
        return 0;
        else
        {
            for(int i=1;i<n.length;i++)
            {
                if(n[i]==t)
                return i;
                else if(n[i-1]<t && n[i]>t)
                return i;
                else 
                continue;
            }
            return n.length;
        }
    }
}