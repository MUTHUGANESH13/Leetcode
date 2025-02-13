class Solution {
    public int tupleSameProduct(int[] n) {
        if (n.length < 4) return 0;
        Map<Integer, Integer> m = new HashMap<>();
        int c = 0;
        for (int i = 0; i < n.length; i++) {
            for (int j = i + 1; j < n.length; j++) {
                m.put(n[i] * n[j], m.getOrDefault(n[i] * n[j], 0) + 1);
            }
        }
        for (int v : m.values()) {
            c += 8 * (v * (v - 1) / 2);
        }
        return c;
    }
}