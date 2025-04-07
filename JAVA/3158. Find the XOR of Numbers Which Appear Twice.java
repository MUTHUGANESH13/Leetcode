class Solution {
    public int duplicateNumbersXOR(int[] n) {
        int c = 0;
        Map<Integer, Integer> m = new HashMap<>();
        for (int i : n) {
            m.put(i, m.getOrDefault(i, 0) + 1);
            if (m.get(i) == 2) c ^= i;
        }
        return c;
    }
}
