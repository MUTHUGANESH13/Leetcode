class Solution {
    public boolean checkPerfectNumber(int n) {
        int i,s=0;
        for(i=1;i<n;i++){
            if(n%i==0)
            s+=i;
        }
        if(n==s)
        return true;
        return false;
    }
}