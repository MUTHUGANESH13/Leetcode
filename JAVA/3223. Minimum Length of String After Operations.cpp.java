class Solution {
    public int minimumLength(String s) {
        int[] f=new int[26];
        for(int i=0;i<s.length();i++)
        f[s.charAt(i)-'a']++;
        int k=0;
        for(int i=0;i<26;i++){
            if(f[i]==0)continue;
            if(f[i]%2==0)
            k+=2;
            else
            k++;
        }
        return k;
    }
}