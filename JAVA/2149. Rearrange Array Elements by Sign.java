class Solution {
    public int[] rearrangeArray(int[] n) {
        int[] a=new int[n.length/2];
        int[] b=new int[n.length/2];
        int i=0,j=0;
        for(int l:n){
            if(l<0)
            b[j++]=l;
            else
            a[i++]=l;
        }
        j=0;
        for(i=0;i<a.length;i++){
            n[j++]=a[i];
            n[j++]=b[i];
        }
        return n;
    }
}