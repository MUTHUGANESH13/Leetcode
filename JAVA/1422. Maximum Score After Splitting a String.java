class Solution {
    public int maxScore(String s) {
        int o=0,z=0,m=0;
        for(char c:s.toCharArray()){
            if(c=='1')
            o++;
        }
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='0')
            z++;
            else
            o--;
            m=Math.max(m,z+o);
        }
        return m;
    }
}