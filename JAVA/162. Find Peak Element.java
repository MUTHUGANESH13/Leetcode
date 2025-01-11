class Solution {
    public int findPeakElement(int[] n) {
        for(int i=1;i<n.length-1;i++){
            if(n[i-1]<n[i]&&n[i]>n[i+1])
            return i;
        }
        if(n.length==2){
            if(n[0]<n[1])
            return 1;
            else
            return 0;
        }
        if(n.length==1)
        return 0;
        if(n[0]>n[1])
        return 0;
        if(n[n.length-1]>n[n.length-2])
        return n.length-1;
        return -1;
    }
}