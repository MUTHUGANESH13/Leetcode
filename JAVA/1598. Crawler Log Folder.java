class Solution {
    public int minOperations(String[] l) {
        int i,n=0;
        for(i=0;i<l.length;i++)
        {
            if(n<0)
        n=0;
            if(l[i].equals("../"))
            {
                n--;
            }
            else if(l[i].equals("./"))
            {
                continue;
            }
            else
            n++;
        }
        if(n<=0)
        n=0;
        return n;
    }
}