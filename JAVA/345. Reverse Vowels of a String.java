class Solution {
    public String reverseVowels(String s) {
        char[] a = s.toCharArray();
        char c;
        int i=0,j=a.length-1;
        while(i<j){
            if(is(a[i])==false)
            i++;
            if(is(a[j])==false)
            j--;
            if(is(a[i])==true&&is(a[j])==true){
                c=a[i];
                a[i++]=a[j];
                a[j--]=c;
            }
        }
        return new String(a);
    }
    private boolean is(char c){
        return(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    }
}