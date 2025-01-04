class Solution {
    public boolean areNumbersAscending(String s) {
        boolean t=false;
        String k="";
        int a=0;
        for(int i=0;i<s.length();i++){
            if(t==true&&s.charAt(i)==' '){
                if(Integer.parseInt(k)<=a)
                return false;
                else
                a=Integer.parseInt(k);
                k="";
                t=false;
            }
            if(s.charAt(i)<='9'&&s.charAt(i)>='0'){
                t=true;
                k+=s.charAt(i);
            }
        }
        if(t==true){
            if(Integer.parseInt(k)<=a)
                return false;
                else
                a=Integer.parseInt(k);
        }
        return true;
    }
}