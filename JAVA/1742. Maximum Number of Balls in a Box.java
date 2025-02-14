class Solution {
    public int countBalls(int l, int h) {
        Map<Integer, Integer> m = new HashMap<>();
        int a = 0;
        for (int i = l; i <= h; i++) {
            int s = 0, x = i;
            while (x != 0) {
                s += x % 10;
                x /= 10;
            }
            m.put(s, m.getOrDefault(s, 0) + 1);
            a = Math.max(m.get(s), a);
        }
        return a;
    }
}