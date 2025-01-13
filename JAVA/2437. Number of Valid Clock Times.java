class Solution {
    public int countTime(String t) {
        int s=1;
        if(t.charAt(4)=='?')
        s*=10;
        if(t.charAt(3)=='?')
        s*=6;
        if(t.charAt(0)=='?'&&t.charAt(1)=='?'){
            s*=24;
            return s;
        }
        if(t.charAt(0)=='2'&&t.charAt(1)=='?')
        s*=4;
        if((t.charAt(0)=='1'||t.charAt(0)=='0')&&t.charAt(1)=='?')
        s*=10;
        if(t.charAt(1)<'4'&&t.charAt(0)=='?')
        s*=3;
        if(t.charAt(1)>='4'&&t.charAt(0)=='?')
        s*=2;
        return s;
    }
}