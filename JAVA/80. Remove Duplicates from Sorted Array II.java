class Solution {
    public int removeDuplicates(int[] n) {
        if(n.length<=2)return n.length;
        int i,l=2;
        for(i=2;i<n.length;i++)
        {
                if(n[i]!=n[l-2]){
                    n[l++]=n[i];
                } 
        }
        return l;
    }
}