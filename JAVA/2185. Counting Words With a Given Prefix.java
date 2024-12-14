class Solution {
    public int prefixCount(String[] w, String p) {
        int k=0;
        for(String c:w){
            if(p.length()<=c.length()){
                if(p.equals(c.substring(0,p.length())))
                k++;
            }
        }
        return k;
    }
}