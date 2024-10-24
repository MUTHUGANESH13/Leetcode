class Solution {
    public int minSwaps(String s) {
        int k=0;
        for(Character c:s.toCharArray()){
            if(c=='[')
            k++;
            else if(k>0)
            k--;
        }
        return ++k/2;
    }
}