class Solution {
    boolean is(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    public int[] vowelStrings(String[] w, int[][] q) {
        int[] a=new int[w.length];
        int[] b=new int[q.length];
        int c=0;
        for(int i=0;i<w.length;i++){
            if(is(w[i].charAt(0))&&is(w[i].charAt(w[i].length()-1)))
            c++;
            a[i]=c;
        }
        for(int i=0;i<q.length;i++){
            int m=a[q[i][1]]-(q[i][0]>0?a[q[i][0]-1]:0);
            b[i]=m;
        }
        return b;
    }
}