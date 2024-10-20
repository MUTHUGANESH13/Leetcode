class Solution {
    public String addSpaces(String s, int[] d) {
        StringBuilder k=new StringBuilder();
        int j=0;
        for(int i:d){
            k.append(s.substring(j,i)).append(' ');
            j=i;
        }
        k.append(s.substring(j,s.length()));
        return k.toString();
    }
}