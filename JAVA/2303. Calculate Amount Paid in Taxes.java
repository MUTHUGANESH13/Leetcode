class Solution {
    public double calculateTax(int[][] b, int t) {
        if(b.length==0)
        return 0;
        int p=0;
        double s=0;
        for(int i=0;i<b.length;i++){
            if(t<=b[i][0]){
                s+=(t-p)*b[i][1]*0.01;
                break;
            }
            else{
                s+=(Math.min(b[i][0],t)-p)*b[i][1]*0.01;
                p=b[i][0];
            }
        }
        return s;
    }
}