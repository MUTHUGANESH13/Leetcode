import java.util.List;

class Solution {
    public int maxDistance(List<List<Integer>> a) {
        int m, M, i, x = 0;
        m = a.get(0).get(0);
        M = a.get(0).get(a.get(0).size() - 1);
        for (i = 1; i < a.size(); i++) {
            x = Math.max(x, Math.max(Math.abs(m - a.get(i).get(a.get(i).size() - 1)),Math.abs(M - a.get(i).get(0))));
            m = Math.min(m, a.get(i).get(0));
            M = Math.max(M, a.get(i).get(a.get(i).size() - 1));
        }
        return x;
    }
}