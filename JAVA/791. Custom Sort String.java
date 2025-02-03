class Solution {
    public String customSortString(String o, String s) {
        int[] f=new int[26];
        String a="",b="";
        for(int i=0;i<s.length();i++){
            f[s.charAt(i)-'a']++;
        }
        for(int i=0;i<o.length();i++){
            while(f[o.charAt(i)-'a']!=0){
                a+=o.charAt(i);
                f[o.charAt(i)-'a']--;
            }
        }
        for(int i=0;i<s.length();i++){
            if(f[s.charAt(i)-'a']!=0)
            b+=s.charAt(i);
        }
        String x=new String(b);
        a+=b;
        return a;
    }
}