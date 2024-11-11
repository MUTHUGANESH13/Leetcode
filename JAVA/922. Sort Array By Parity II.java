class Solution {
    public int[] sortArrayByParityII(int[] n) {
        int i=0,j=1;
        while(i<n.length && j<n.length){
            if(n[i]%2==0)
            i+=2;
            else if(n[j]%2==1)
            j+=2;
            else{
                n[i]=n[i]+n[j];
                n[j]=n[i]-n[j];
                n[i]=n[i]-n[j];
                i+=2;
                j+=2;
            }
        }
        return n;
    }
}