class Solution {
    public int sumOddLengthSubarrays(int[] a) {
        int i,j,k;
        int s=0;
        for(i=1;i<=a.length;i+=2){
                for(j=0;j<=a.length-i;j++){
                    for(k=j;k<j+i;k++){
                        s=s+a[k];
                    }
                }
        }
        return s;
    }
}