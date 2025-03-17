class Solution {
    public int splitNum(int n) {
        String k=Integer.toString(n);
        char x[]=k.toCharArray();
        Arrays.sort(x);
        String s=new String(x);
        String a="",b="";
        for(int i=0;i<s.length();i++){
            if(i%2==0)
            a+=s.charAt(i);
            else
            b+=s.charAt(i);
        }
        return(Integer.parseInt(a)+Integer.parseInt(b));
    }
}