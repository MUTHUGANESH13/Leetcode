class Solution {
    public String mostCommonWord(String p, String[] b) {
        Map<String, Integer> m = new HashMap<>();
        for (String s : b) m.put(s, -1);
        String s = "", res = "";
        int d = 0;
        
        for (char c : (p + " ").toCharArray()) {
            if (Character.isLetter(c)) s += Character.toLowerCase(c);
            else if (!s.isEmpty()) {
                if (m.getOrDefault(s, 0) != -1) m.put(s, m.getOrDefault(s, 0) + 1);
                s = "";
            }
        }
        
        for (Map.Entry<String, Integer> i : m.entrySet()) {
            if (i.getValue() > d) {
                d = i.getValue();
                res = i.getKey();
            }
        }
        return res;
    }
}
