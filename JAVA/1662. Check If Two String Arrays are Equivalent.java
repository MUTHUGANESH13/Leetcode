class Solution {
    public boolean arrayStringsAreEqual(String[] w1, String[] w2) {
        String a="",b="";
        for(int i=0;i<w1.length;i++)
        {
            a=a+w1[i];
        }
        for(int i=0;i<w2.length;i++)
        {
            b=b+w2[i];
        }
        return(a.equals(b));
    }
}