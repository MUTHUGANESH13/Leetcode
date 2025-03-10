class Solution {
    public long countBadPairs(int[] n) {
        long c = (long) n.length * (n.length - 1) / 2;
        Map<Integer, Integer> m = new HashMap<>();
        
        for (int i = 0; i < n.length; i++) {
            int key = n[i] - i;
            m.put(key, m.getOrDefault(key, 0) + 1);
        }
        
        for (int value : m.values()) {
            if (value > 1)
                c -= (long) (value - 1) * value / 2;
        }
        
        return c;
    }
}
