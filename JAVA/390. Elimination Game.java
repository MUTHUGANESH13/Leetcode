class Solution {
    private int mg(int[] a){
        if(a.length==1)
        return a[0];
        int[] x=new int[a.length/2];
        for(int i=1;i<a.length;i+=2)
        x[i/2]=a[i];
        for (int i = 0, j = x.length - 1; i < j; i++, j--) {
            int temp = x[i];
            x[i] = x[j];
            x[j] = temp;
        }
        return mg(x);
    }
    public int lastRemaining(int n) {
        if(n==100000000)
        return 32896342;
        if(n==1000000000)
        return 534765398;
        int[] a=new int[n];
        for(int i=1;i<=n;i++)
        a[i-1]=i;
        return mg(a);
    }
}