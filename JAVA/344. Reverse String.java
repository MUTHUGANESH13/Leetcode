class Solution {
    public void reverseString(char[] s) {
        int i;
        char c;
        for(i=0;i<s.length/2;i++){
            c=s[i];
            s[i]=s[s.length-1-i];
            s[s.length-1-i]=c;
        }
    }
}