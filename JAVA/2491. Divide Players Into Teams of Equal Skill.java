class Solution {
    public long dividePlayers(int[] s) {
        long t,a=0;
        int i=0,j=s.length-1;
        Arrays.sort(s);
        t=s[i]+s[j];
        while(i<j){
            if(s[i]+s[j]==t)
            a+=s[i++]*s[j--];
            else
            return -1;
        }
        return a;
    }
}