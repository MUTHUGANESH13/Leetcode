class Solution {
    public String clearDigits(String s) {
        List<Character>a=new ArrayList<>();
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)>='0'&&s.charAt(i)<='9')
            a.remove(a.size()-1);
            else
            a.add(s.charAt(i));
        }
        String k="";
        for(int i=0;i<a.size();i++){
            k+=a.get(i);
        }
        return k;
    }
}