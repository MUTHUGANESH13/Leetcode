class Solution {
    public double average(int[] s) {
        double a=s[0];
        for(int i=1;i<s.length;i++){
            a+=s[i];
        }
        Arrays.sort(s);
        a=a-s[0]-s[s.length-1];
        return(a/(s.length-2));
    }
}