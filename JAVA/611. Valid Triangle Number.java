class Solution {
    public int triangleNumber(int[] n) {
        if(n.length<3)
        return 0;
        int c=0;
        Arrays.sort(n);
        for(int i=0;i<n.length-2;i++){
            int k=i+2;
            for(int j=i+1;j<n.length-1&&n[i]!=0;j++){
                while(k<n.length&&n[i]+n[j]>n[k])
                k++;
                c+=k-j-1;
            }
        }
        return c;
    }
}