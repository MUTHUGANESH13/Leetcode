class Solution {
    public int[] leftRightDifference(int[] n) {
        int a[]=new int[n.length];
        int b[]=new int[n.length];
        a[0]=0;
        b[n.length-1]=0;
        for(int i=1;i<n.length;i++){
            a[i]=a[i-1]+n[i-1];
        }
        for(int i=n.length-2;i>=0;i--){
            b[i]=b[i+1]+n[i+1];
        }
        for(int i=0;i<a.length;i++)
        b[i]=Math.abs(a[i]-b[i]);
        return b;
    }
}