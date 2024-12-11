class Solution {
    public String compressedString(String w) {
        String s="";
        int c=1;
        for(int i=0;i<w.length()-1;i++){
            if(w.charAt(i)==w.charAt(i+1))
            c++;
            else{
                if(c!=0){
                    s+=Integer.toString(c);
                    s+=w.charAt(i);
                    c=1;
                }
                else
                c=1;
            }
            if(c>=9){
                s+=Integer.toString(c);
                s+=w.charAt(i);
                c=0;
            }
        }
        if(c!=0){
                s+=Integer.toString(c);
                s+=w.charAt(w.length()-1);
                }
                return s;
    }
}