class Solution {
    public int getWinner(int[] a, int k) {
        int w=0,c=0;
        for(int i=0;i<a.length;i++){
            if(a[i]>a[w]){
                w=i;
                c=1;
            }
            else if(a[w]>a[i])
            c++;
            if(c==k)
            return a[w];
        }
        return a[w];
    }
}