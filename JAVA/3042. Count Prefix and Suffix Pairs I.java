class Solution {
    public int countPrefixSuffixPairs(String[] w) {
        int c=0;
        for(int i=0;i<w.length;i++){
            for(int j=i+1;j<w.length;j++){
                if(isPrefixAndSuffix(w[i],w[j]))
                c++;
            }
        }
        return c;
    }
    private boolean isPrefixAndSuffix(String s1,String s2){
        if(s1.length()>s2.length())
        return false;
        if(s2.substring(0,s1.length()).equals(s1)&&s2.substring(s2.length()-s1.length()).equals(s1))
        return true;
        return false;
    }
}