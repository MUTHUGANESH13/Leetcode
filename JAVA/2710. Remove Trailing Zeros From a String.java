class Solution {
    public String removeTrailingZeros(String n) {
        int i,k=0;
        for(i=n.length()-1;i>=0;i--){
            if(n.charAt(i)=='0')
            k++;
            else
            break;
        }
        return (n.substring(0,n.length()-k));
    }
}