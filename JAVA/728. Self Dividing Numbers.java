class Solution {
    public List<Integer> selfDividingNumbers(int l, int r) {
        List<Integer> a=new ArrayList<>();
        for(int i=l;i<=r;i++){
            if(sd(i)){
                a.add(i);
            }
        }
        return a;
    }
    private boolean sd(int n){
        int r=n;
        while(r!=0){
            if(r%10==0)
            return false;
            if(n%(r%10)!=0)
            return false;
            r/=10;
        }
        return true;
    }
}