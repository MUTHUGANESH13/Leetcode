class Solution {
    public String finalString(String s) {
        String a="";
        for(Character c:s.toCharArray()){
            if(c=='i')
            a=r(a);
            else
            a+=c;
        }
        return a;
    }
    private String r(String s){
        char[] c = s.toCharArray();
        int i = 0, j = s.length() - 1;
        while (i < j) {
            char t = c[i];
            c[i++] = c[j];
            c[j--] = t;
        }
        return new String(c);
    }
}