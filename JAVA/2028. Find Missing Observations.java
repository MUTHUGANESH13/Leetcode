class Solution {
    public int[] missingRolls(int[] r, int m, int n) {
        int[] a=new int[n];
        int i,s=0,k;
        s=Arrays.stream(r).sum();
        k=(n+r.length)*m-s;
        s=k/n;
        if(s<1||s>6)
        return (new int[0]);
        if(s==6&&(k%n)>0)
        return (new int[0]);
        for(i=0;i<n;i++){
            if(i<(k%n))
            a[i]=s+1;
            else
            a[i]=s;
        }
        return a;
    }
}