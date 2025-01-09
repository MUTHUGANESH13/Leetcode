class Solution {
    public boolean digitCount(String n) {
        int[] c=new int[10];
        for(int i=0;i<n.length();i++){
            c[n.charAt(i)-'0']++;
        }
        for(int i=0;i<n.length();i++){
            if((n.charAt(i)-'0')!=c[i])
            return false;
        }
        return true;
    }
}