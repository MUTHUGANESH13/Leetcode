class Solution {
    public boolean checkDistances(String s, int[] d) {
        int[] a=new int[26];
        for(int i=0;i<s.length();i++)
        a[i]--;
        for(int i=0;i<s.length();i++){
            int x=s.charAt(i)-'a';
            if(a[x]==-1)
            a[x]=i;
            else{
                a[x]=i-a[x]-1;
                if(a[x]!=d[x])
                return false;
            }
        }
        return true;
    }
}