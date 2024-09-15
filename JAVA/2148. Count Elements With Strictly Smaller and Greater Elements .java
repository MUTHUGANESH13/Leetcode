class Solution {
    public int countElements(int[] n) {
        if(n.length<3)
        return 0;
        Arrays.sort(n);
        int i,c=0;
        for(i=1;i<n.length;i++){
            if(n[0]==n[i])
            c++;
            else
            break;
        }
        for(i=n.length-2;i>=0;i--){
            if(n[n.length-1]==n[i])
            c++;
            else
            break;
        }
        if(n.length-c-2<0)
        return 0;
        return(n.length-c-2);
    }
}