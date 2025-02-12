class Solution {
    public int[] decode(int[] e, int f) {
        int a[]=new int[e.length+1];
        a[0]=f;
        for(int i=0;i<e.length;i++){
            a[i+1]=a[i]^e[i];
        }
        return a;
    }
}