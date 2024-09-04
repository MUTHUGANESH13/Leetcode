class Solution {
    public double findMedianSortedArrays(int[] n1, int[] n2) {
        int i;
        double m;
        int[] n=new int[n1.length+n2.length];
        for(i=0;i<n1.length;i++){
            n[i]=n1[i];
        }
        for(i=0;i<n2.length;i++){
            n[i+n1.length]=n2[i];
        }
        Arrays.sort(n);
        if(n.length%2==0)
        m=(n[n.length/2]+n[n.length/2-1])/2.0;
        else
        m=n[n.length/2];
        return m;
    }
}