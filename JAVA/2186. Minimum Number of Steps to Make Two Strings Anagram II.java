class Solution {
    public int minSteps(String s, String t) {
        int[] a=new int[26];
        int[] b=new int[26];
        for(int i=0;i<s.length();i++)
        a[s.charAt(i)-'a']++;
        for(int i=0;i<t.length();i++)
        b[t.charAt(i)-'a']++;
        int c=0;
        for(int i=0;i<26;i++)
        c+=Math.abs(b[i]-a[i]);
        return c;
    }
}