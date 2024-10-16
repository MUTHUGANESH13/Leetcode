class Solution {
    public String removeStars(String s) {
        List<Character> a=new ArrayList<>();
        for(Character c:s.toCharArray()){
            if(c=='*'){
                if(a.size()!=0)
                a.remove(a.size()-1);
            }
            else
            a.add(c);
        }
        String b="";
        for(Character c:a){
            b+=c;
        }
        return b;
    }
}