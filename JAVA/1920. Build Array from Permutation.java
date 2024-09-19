class Solution {
    public int[] buildArray(int[] n) {
        int[] a=new int[n.length];
        for(int i=0;i<n.length;i++){
            a[i]=n[n[i]];
        }
        return a;
    };
}