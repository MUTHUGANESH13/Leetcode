class Solution {
    public long[] sumOfThree(long n) {
        if(n%3!=0)
        return new long[0];
        long[] a=new long[3];
        a[1]=n/3;
        a[0]=(n/3)-1;
        a[2]=(n/3)+1;
        return a;
    }
}