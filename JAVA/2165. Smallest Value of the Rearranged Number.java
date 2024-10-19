class Solution {
    public long smallestNumber(long n) {
        List<Integer> a=new ArrayList<>();
        if(n==0)
        return 0;
        int z=0;
        long b=0;
        boolean t=true;
        if(n<0){
            n=-n;
            t=false;
        }
        while(n!=0){
            if(n%10==0)
            z++;
            else
            a.add((int)(n%10));
            n/=10;
        }
        if(t==true){
             Collections.sort(a, Collections.reverseOrder());
             b=a.remove(a.size() - 1);
             while(z!=0){
                b*=10;
                z--;
             }
             while(a.size()!=0){
                b=b*10+a.remove(a.size() - 1);
             }
             return b;
        }
        Collections.sort(a);
        while(a.size()!=0){
            b=b*10+a.remove(a.size() - 1);
        }
        while(z!=0){
            b*=10;
            z--;
        }
        return -b;
    }
}