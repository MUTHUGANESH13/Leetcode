class Solution {
    public boolean canConstruct(String s, int k) {
        if(s.length()<k)
        return false;
        int[] f=new int[26];
        for(int i=0;i<s.length();i++){
            f[s.charAt(i)-'a']++;
        }
        int c=0;
        for(int i=0;i<26;i++){
            if(f[i]==0)
            continue;
            if(f[i]%2==1)
            c++;
            if(c>k)
            return false;
        }
        return true;
    }
}