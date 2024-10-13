class Solution {
    public String sortVowels(String s) {
        char[] x=s.toCharArray();
        List<Character> a=new ArrayList<>();
        for(int i=0;i<x.length;i++){
            if(is(x[i])==true){
                a.add(x[i]);
                x[i]='#';
            }
        }
        Collections.sort(a);
        int j=a.size();
        for(int i=x.length-1;i>=0;i--){
            if(x[i]=='#'){
                x[i]=a.get(--j);
            }
        }
        return new String(x);
    }
    private boolean is(char c){
        return(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    }
}