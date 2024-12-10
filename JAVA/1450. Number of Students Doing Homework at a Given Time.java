class Solution {
    public int busyStudent(int[] s, int[] e, int q) {
        int c=0;
        for(int i=0;i<s.length;i++){
            if(s[i]<=q && q<=e[i])
            c++;
        }
        return c;
    }
}