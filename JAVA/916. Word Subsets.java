class Solution {
    public List<String> wordSubsets(String[] w, String[] v) {
        Map<Character, Integer> r = new HashMap<>();
        List<String> a = new ArrayList<>();
        for (String s : v) {
            Map<Character, Integer> m = new HashMap<>();
            for (char c : s.toCharArray()) {
                m.put(c, m.getOrDefault(c, 0) + 1);
                r.put(c, Math.max(r.getOrDefault(c, 0), m.get(c)));
            }
        }
        for (String s : w) {
            Map<Character, Integer> l = new HashMap<>();
            for (char c : s.toCharArray()) {
                l.put(c, l.getOrDefault(c, 0) + 1);
            }
            boolean t = true;
            for (Map.Entry<Character, Integer> entry : r.entrySet()) {
                if (entry.getValue() > l.getOrDefault(entry.getKey(), 0)) {
                    t = false;
                    break;
                }
            }
            if (t) {
                a.add(s);
            }
        }
        return a;
    }
}