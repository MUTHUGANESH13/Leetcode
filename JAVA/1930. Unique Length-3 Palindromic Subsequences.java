class Solution {
    public int countPalindromicSubsequence(String s) {
        Map<Character, Integer> a = new HashMap<>();
        int c = 0;
        
        for (int i = 0; i < s.length() - 2; i++) {
            if (!a.containsKey(s.charAt(i))) {
                for (int j = s.length() - 1; j > 1; j--) {
                    if (s.charAt(i) == s.charAt(j)) {
                        a.put(s.charAt(i), -1);
                        HashSet<Character> x = new HashSet<>();
                        for (int k = i + 1; k < j; k++) {
                            x.add(s.charAt(k));
                        }
                        c += x.size();
                        break;
                    }
                }
            }
        }
        
        return c;
    }
}