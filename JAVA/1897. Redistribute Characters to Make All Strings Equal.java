class Solution {
    public boolean makeEqual(String[] w) {
        int[] f=new int[26];
        for(String s:w){
            for(int i=0;i<s.length();i++){
                f[s.charAt(i)-'a']++;
            }
        }
        for(int i=0;i<26;i++){
            if(f[i]%w.length!=0)
            return false;
        }
        return true;
    }
}