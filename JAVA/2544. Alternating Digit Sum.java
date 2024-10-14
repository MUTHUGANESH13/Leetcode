class Solution {
    public int alternateDigitSum(int n) {
        List<Integer>a=new ArrayList<>();
        int s=0,i;
        while(n!=0){
            a.add(n%10);
            n/=10;
        }
        n=-1;
        for(i=a.size()-1;i>=0;i--){
            n=-n;
            s+=(a.get(i)*n);
        }
        return s;
    }
}