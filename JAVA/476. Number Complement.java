class Solution {
    public int findComplement(int n) {
        int r=0;
        String s="";
        while(n!=0){
            if(n%2==0)
            s+='1';
            else
            s+='0';
            n/=2;
        }
        for(int j=0;j<s.length();j++){
            if(s.charAt(j)=='1')
            r+=Math.pow(2,j);
        }
        return r;
    }
}