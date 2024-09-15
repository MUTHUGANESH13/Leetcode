class Solution {
    public int[] sortEvenOdd(int[] n) {
        int i,x=0,y=0;
        int[] o=new int[n.length/2];
        int[] e=new int[n.length / 2 + n.length % 2];
        for(i=0;i<n.length;i++){
            if(i%2==0)
            e[x++]=n[i];
            else
            o[y++]=n[i];
        }
        Arrays.sort(e);
        Arrays.sort(o);
        x=0;
        y=o.length-1;
        i=0;
        while(x<e.length||y>=0){
            if(x<e.length)
            n[i++]=e[x++];
            if(y>=0)
            n[i++]=o[y--];
        }
        return n;
    }
}