class Solution {
    private int gcd(int a,int b){
        if(b==0)
        return a;
        return gcd(b,a%b);
    }
    public int countBeautifulPairs(int[] n) {
        int c=0;
        for(int i=0;i<n.length;i++){
            String s=Integer.toString(n[i]);
            for(int j=i+1;j<n.length;j++){
                if(gcd(n[j]%10,s.charAt(0)-'0')==1)
                c++;
            }
        }
        return c;
    }
}