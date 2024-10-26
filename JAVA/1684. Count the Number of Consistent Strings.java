class Solution {
    public int countConsistentStrings(String s, String[] w) {
        HashSet<Character> a=new HashSet<>();
        int i,j,k=0;
        for(i=0;i<s.length();i++){
            a.add(s.charAt(i));
        }
        for(i=0;i<w.length;i++){
            for(j=0;j<w[i].length();j++){
                if(!a.contains(w[i].charAt(j))){
                    k++;
                    break;
                }
            }
        }
        return (w.length-k);
    }
}