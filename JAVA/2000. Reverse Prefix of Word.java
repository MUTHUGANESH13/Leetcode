class Solution {
    public String reversePrefix(String w, char ch) {
        int a=-1;
        String k="";
        for(int i=0;i<w.length();i++){
            if(w.charAt(i)==ch){
                a=i;
                break;
            }
        }
        for(int i=0;i<=a;i++){
            k=w.charAt(i)+k;
        }
        for(int i=a+1;i<w.length();i++)
        k+=w.charAt(i);
        return k;
    }
}