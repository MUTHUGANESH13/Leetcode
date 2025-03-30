class Solution {
    public int countTestedDevices(int[] b) {
        int c=0;
        for(int i=0;i<b.length;i++){
            if(b[i]>0){
                c++;
                for(int j=i+1;j<b.length;j++)
                b[j]--;
            }
        }
        return c;
    }
}