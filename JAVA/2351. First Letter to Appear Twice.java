class Solution {
    public char repeatedCharacter(String s) {
        HashSet<Character>x=new HashSet<>();
        for(int i=0;i<s.length();i++){
            x.add(s.charAt(i));
            if(x.size()!=i+1)
            return s.charAt(i);
        }
        return 'a';
    }
}