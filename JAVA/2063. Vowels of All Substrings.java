class Solution {
    public long countVowels(String w) {
        long c=0;
        for(int i=0;i<w.length();i++){
            if(w.charAt(i)=='a'||w.charAt(i)=='e'||w.charAt(i)=='i'||w.charAt(i)=='o'||w.charAt(i)=='u')
            c+=(long)(i+1)*(w.length()-i);
        }
        return c;
    }
}