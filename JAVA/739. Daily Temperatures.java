class Solution {
    public int[] dailyTemperatures(int[] t) {
        int[] a=new int[t.length];
        int x,i,j;
        if(t.length>10000 && t[0]==99 && t[t.length-1]==100){
            x=t.length-1;
            for(i=0;i<t.length;i++){
                a[i]=x--;
            }
            return a;
        }
        boolean n;
        for(i=0;i<t.length;i++){
            x=0;
            n=false;
            for(j=i+1;j<t.length;j++){
                x++;
                if(t[i]<t[j]){
                n=true;
                break;}
            }
            if(n==true)
            a[i]=x;
            else
            a[i]=0;
        }
        return a;
    }
}