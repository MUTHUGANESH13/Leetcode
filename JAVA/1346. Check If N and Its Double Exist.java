class Solution {
    public boolean checkIfExist(int[] a) {
        int i,j;
        for(i=0;i<a.length;i++){
            for(j=1+i;j<a.length;j++){
                if(a[i]==2*a[j] ||a[j]==2*a[i])
                return true;
            }
        }
        return false;
    }
}