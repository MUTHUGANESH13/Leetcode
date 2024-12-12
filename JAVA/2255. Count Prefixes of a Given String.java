class Solution {
    public int countPrefixes(String[] w, String s) {
        int k=0;
        for(String c:w){
            if(s.substring(0,c.length()).equals(c))
            k++;
        }
        return k;
    }
}