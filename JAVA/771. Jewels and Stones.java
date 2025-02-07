class Solution {
    public int numJewelsInStones(String j, String s) {
        HashMap<Character,Integer>m=new HashMap<>();
        for(int i=0;i<s.length();i++)
        m.put(s.charAt(i), m.getOrDefault(s.charAt(i), 0) + 1);
        int k=0;
        for(int i=0;i<j.length();i++)
        k+=m.getOrDefault(j.charAt(i), 0);
        return k;
    }
}