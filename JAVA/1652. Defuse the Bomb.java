class Solution {
    public int[] decrypt(int[] c, int k) {
        int[] a=new int[c.length];
        for(int i=0;i<a.length;i++)
        a[i]=0;
        if(k>0){
            for(int i=0;i<c.length;i++){
                for(int j=0;j<k;j++){
                    a[i]+=c[(i+j+1)%c.length];
                }
            }
            return a;
        }
        k=-k;
        for(int i=0;i<c.length/2;i++){
            int t=c[i];
            c[i]=c[c.length-i-1];
            c[c.length-1-i]=t;
        }
        for(int i=0;i<c.length;i++){
                for(int j=0;j<k;j++){
                    a[i]+=c[(i+j+1)%c.length];
                }
            }
        for(int i=0;i<a.length/2;i++){
            int t=a[i];
            a[i]=a[c.length-i-1];
            a[c.length-1-i]=t;
        }
        return a;
    }
}