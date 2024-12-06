class Solution {
    public int maximumDifference(int[] n) {
        int i,j,m=-1;
        for(i=0;i<n.length;i++){
            for(j=i+1;j<n.length;j++){
                if(m<(n[j]-n[i])&&(n[j]-n[i])>0)
                m=n[j]-n[i];
            }
        }
        return m;
    }
}