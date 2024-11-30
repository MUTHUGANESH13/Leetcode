class Solution {
    public long minimumSteps(String s) {
        long c=0;
        int i,w=0;
        for(i=0;i<s.length();i++){
            if(s.charAt(i)=='0'){
                c+=i-w;
                w++;
            }
        }
        return c;
    }
}