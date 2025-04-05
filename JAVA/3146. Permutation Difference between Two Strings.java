class Solution {
    public int findPermutationDifference(String s, String t) {
        Map<Character, Integer> m = new HashMap<>();
        Map<Character, Integer> n = new HashMap<>();
        for (int i = 0; i < s.length(); i++) {
            m.put(s.charAt(i), i);
            n.put(t.charAt(i), i);
        }
        int k = 0;
        for (char c : s.toCharArray()) {
            k += Math.abs(m.get(c) - n.get(c));
        }
        return k;
    }
}
