class Solution {
    public int minSteps(String s, String t) {
        int[] a=new int[26];
        for(int i=0;i<s.length();i++){
            a[t.charAt(i)-'a']++;
            a[s.charAt(i)-'a']--;
        }
        int c=0;
        for(int i=0;i<26;i++)
        c+=Math.max(0,a[i]);
        return c;
    }
}