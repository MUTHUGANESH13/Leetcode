class Solution {
    public boolean checkAlmostEquivalent(String w1, String w2) {
        int[] a=new int[26];
        int[] b=new int[26];
        for(int i=0;i<w1.length();i++){
            a[w1.charAt(i)-'a']++;
            b[w2.charAt(i)-'a']++;
        }
        for(int i=0;i<26;i++){
            if(Math.abs(a[i]-b[i])>3)
            return false;
        }
        return true;
    }
}