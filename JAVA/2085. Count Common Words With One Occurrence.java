class Solution {
    public int countWords(String[] w1, String[] w2) {
        List<String> a = new ArrayList<>();
        List<String> b = new ArrayList<>();
        Map<String, Integer> x = new HashMap<>();
        Map<String, Integer> f1 = new HashMap<>();
        Map<String, Integer> f2 = new HashMap<>();
        int c = 0;

        for (String word : w1) {
            f1.put(word, f1.getOrDefault(word, 0) + 1);
        }
        for (String word : w1) {
            if (f1.get(word) == 1) {
                a.add(word);
            }
        }
        for (String word : w2) {
            f2.put(word, f2.getOrDefault(word, 0) + 1);
        }
        for (String word : w2) {
            if (f2.get(word) == 1) {
                b.add(word);
            }
        }
        a.addAll(b);
        for (String word : a) {
            x.put(word, x.getOrDefault(word, 0) + 1);
        }
        for (Map.Entry<String, Integer> entry : x.entrySet()) {
            if (entry.getValue() == 2) {
                c++;
            }
        }
        return c;
    }
}
