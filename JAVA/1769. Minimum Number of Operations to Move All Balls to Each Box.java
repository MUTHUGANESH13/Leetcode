class Solution {
    public int[] minOperations(String b) {
        int a[]=new int[b.length()];
        for(int i=0;i<b.length();i++){
            if(b.charAt(i)=='1'){
                for(int j=0;j<b.length();j++){
                    a[j]+=Math.abs(j-i);
                }
            }
        }
        return a;
    }
}