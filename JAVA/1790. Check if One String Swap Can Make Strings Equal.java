class Solution {
    public boolean areAlmostEqual(String s1, String s2) {
        char[] a=s1.toCharArray();
        char[] b=s2.toCharArray();
        int i,c=0;
        for(i=0;i<a.length;i++){
            if(a[i]!=b[i])
            c++;
        }
        if(c==0)
        return true;
        if(c==2){
            Arrays.sort(a);
            Arrays.sort(b);
            return (Arrays.equals(a,b));
        }
        return false;
    }
}