class Solution {
    public int minimumSum(int n) {
        int[] a=new int[4];
        for(int i=0;i<4;i++){
            a[i]=n%10;
            n/=10;
        }
        Arrays.sort(a);
        return((10*a[0]+a[2])+(10*a[1]+a[3]));
    }
}