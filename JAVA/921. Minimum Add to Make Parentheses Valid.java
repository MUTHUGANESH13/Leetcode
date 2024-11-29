class Solution {
    public int minAddToMakeValid(String s) {
        int l=0,r=0;
        for(Character c:s.toCharArray()){
            if(c=='(')
            l++;
            else{
                if(l==0)
                r++;
                else
                l--;
            }
        }
        return r+l;
    }
}