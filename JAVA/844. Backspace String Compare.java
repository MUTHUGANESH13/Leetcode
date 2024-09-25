class Solution {
    public boolean backspaceCompare(String s, String t) {
        List<Character> a = new ArrayList<>();
        List<Character> b = new ArrayList<>();
        for(Character c:s.toCharArray()){
            if(c=='#'){
                if(a.size()!=0){
                    a.remove(a.size()-1);
                }
            }
            else{
                a.add(c);
            }
        }
        for(Character c:t.toCharArray()){
            if(c=='#'){
                if(b.size()!=0){
                    b.remove(b.size()-1);
                }
            }
            else{
                b.add(c);
            }
        }
        return a.equals(b);
    }
}