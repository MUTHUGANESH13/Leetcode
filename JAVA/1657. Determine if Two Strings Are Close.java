class Solution {
    public boolean closeStrings(String w1, String w2) {
        int[] a=new int[26];
        int[] b=new int[26];
        HashSet<Character>x=new HashSet<>();
        HashSet<Character>y=new HashSet<>();
        for(int i=0;i<w1.length();i++){
            a[w1.charAt(i)-'a']++;
            x.add(w1.charAt(i));
        }
        for(int i=0;i<w2.length();i++){
            b[w2.charAt(i)-'a']++;
            y.add(w2.charAt(i));
        }
        Arrays.sort(a);
        Arrays.sort(b);
        return Arrays.equals(a,b) && x.equals(y);
    }
}