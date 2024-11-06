class Solution {
    public boolean buddyStrings(String s, String g) {
        if(s.length()!=g.length())
            return false;
        Set<Character> x=new HashSet<>();
        for(int i=0;i<s.length();i++){
            x.add(s.charAt(i));
        }
        if(s.equals(g))
            return x.size()<s.length();
        int i=0,j=s.length()-1;
        while(i<s.length() && s.charAt(i)==g.charAt(i))
            i++;
        while(j>=0 && s.charAt(j)==g.charAt(j))
            j--;
        if(i>=j)
            return false;
        char[] a = s.toCharArray();
        char[] b = g.toCharArray();
        char temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        return Arrays.equals(a, b);
    }
}
