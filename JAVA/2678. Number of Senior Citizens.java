class Solution {
    public int countSeniors(String[] d) {
        int i,n=0;
        for(i=0;i<d.length;i++)
        {
            if(Integer.parseInt(d[i].substring(11,13))>60)
            n++;
        }
        return n;
    }
}