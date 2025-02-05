class Solution {
    public int maxRepeating(String s, String w) {
        int c=0;
        String a=w;
        while(s.contains(a)){
            c++;
            a+=w;
        }
        return c;
    }
}