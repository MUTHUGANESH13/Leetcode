class Solution {
    public boolean checkIfPangram(String s) {
        HashSet<Character>a=new HashSet<>();
        for(int i=0;i<s.length();i++){
            a.add(s.charAt(i));
            if(a.size()==26)
            return true;
        }
        return false;
    }
}