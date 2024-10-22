class Solution {
    public int finalValueAfterOperations(String[] s) {
        int x=0,i;
        for(i=0;i<s.length;i++){
            if(s[i].equals("X++")||s[i].equals("++X"))
            x++;
            else
            x--;
        }
        return x;
    }
}