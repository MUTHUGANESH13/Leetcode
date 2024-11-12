class Solution {
    public String reverseOnlyLetters(String s) {
        int i=0,j=s.length()-1;
        char[] a=s.toCharArray();
        char c;
        while(i<j){
            if(is(a[i])==false)
            i++;
            if(is(a[j])==false)
            j--;
            if(is(a[i])==true && is(a[j])==true){
                c=a[i];
                a[i++]=a[j];
                a[j--]=c;
            }
        }
        return new String(a);
    }
    private boolean is(char c){
        return(((int)c>=97 &&(int)c<=122)||((int)c>=65 &&(int)c<=90));
    }
}