class Solution {
    public void duplicateZeros(int[] a) {
        for(int i=0;i<a.length;i++){
            if(a[i]==0){
                int j=a.length-1;
                while(j>i+1){
                    a[j]=a[j-1];
                    j--;
                }
                if(i+1<a.length)
                a[++i]=0;
            }
        }
    }
}