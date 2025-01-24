class Solution {
    public int[] sumEvenAfterQueries(int[] n, int[][] q) {
        int s=0;
        int[] a=new int[q.length];
        for(int i:n){
            if(i%2==0)
            s+=i;
        }
        for(int i=0;i<q.length;i++){
            if(n[q[i][1]]%2==0)
            s-=n[q[i][1]];
            n[q[i][1]]+=q[i][0];
            if(n[q[i][1]]%2==0)
            s+=n[q[i][1]];
            a[i]=s;
        }
        return a;
    }
}