class Solution {
    public int numDifferentIntegers(String w) {
        String s="";
        int m;
        Set<String>x=new HashSet<>();
        for(int i=0;i<w.length();i++){
            if(w.charAt(i)>='0'&&w.charAt(i)<='9')
            s+=w.charAt(i);
            else{
                if(s.length()!=0){
                    m=0;
                    while(m<s.length()&&s.charAt(m)=='0')
                    m++;
                    x.add(s.substring(m));
                }
                s="";
            }
        }
        if(s.length()!=0){
                    m=0;
                    while(m<s.length()&&s.charAt(m)=='0')
                    m++;
                    x.add(s.substring(m));
                }
                return x.size();
    }
}