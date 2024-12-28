class Solution {
    public int[] resultsArray(int[] n, int k) {
        int[] a=new int[n.length-k+1];
        for(int i=0;i<=n.length-k;i++){
            boolean t=true;
            int m=n[i];
            for(int j=1;j<k;j++){
                if(n[i+j]!=n[i+j-1]+1){
                    t=false;
                    break;
                }
                m=n[i+j];
                }
                if(t==true)
                a[i]=m;
                else
                a[i]=-1;
            
        }
        return a;
    }
}