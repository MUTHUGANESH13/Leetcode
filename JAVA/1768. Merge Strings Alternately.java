class Solution {
    public String mergeAlternately(String w1, String w2) {
        String s="";
        int l1=0,l2=0;
        while(l1!=w1.length() || l2!=w2.length())
        {
            if(l1==w1.length())
            s+=w2.charAt(l2++);
            else if(l2==w2.length())
            s+=w1.charAt(l1++);
            else
            {
                s+=w1.charAt(l1++);
                s+=w2.charAt(l2++);
            }
        }
        return s;
    }
}