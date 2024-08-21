class Solution {
    public String addBinary(String a, String b) {
        int  i=a.length()-1,j=b.length()-1,c=0,k=0;
        String s="";
        while(i>=0 && j>=0){
            if(a.charAt(i)=='1' && b.charAt(j)=='1'){
                if(c==1){
                c=1;
                s='1'+s;
            }
            else{
                    s='0'+s;
                    c=1;
                }
        }
           else if((a.charAt(i)=='0' && b.charAt(j)=='1') || (a.charAt(i)=='1' && b.charAt(j)=='0')){
                if(c==1){
                    s='0'+s;
                    c=1;
                }
                else{
                    s='1'+s;
                }
            }
            else{
                if(c==1){
                    s='1'+s;
                    c=0;
                }
                else{
                    s='0'+s;
                }
            }
            i--;j--;
        }
        while(i>=0){
            if(a.charAt(i)=='1'){
                if(c==1){
                    s='0'+s;
                    c=1;
                }
                else{
                    s='1'+s;
                }
            }
            else{
                if(c==1){
                    s='1'+s;
                    c=0;
                }
                else{
                    s='0'+s;
                }
            }
            i--;
        }
        while(j>=0){
            if(b.charAt(j)=='1'){
                if(c==1){
                    s='0'+s;
                    c=1;
                }
                else{
                    s='1'+s;
                }
            }
            else{
                if(c==1){
                    s='1'+s;
                    c=0;
                }
                else{
                    s='0'+s;
                }
            }
            j--;
        }
        if(c==1){
            s='1'+s;
        }
        return s;
        }
}