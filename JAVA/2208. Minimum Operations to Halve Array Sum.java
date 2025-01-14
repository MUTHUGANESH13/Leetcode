class Solution {
    public int halveArray(int[] n) {
        PriorityQueue<Double> p = new PriorityQueue<>(Collections.reverseOrder());
        double s = 0;
        for (int i : n) {
            s += i;
            p.add((double) i);
        }
        double h = s / 2.0;
        int c = 0;
        while (s > h) {
            double a = p.poll() / 2.0; 
            s -= a;
            p.add(a);
            c++; 
        }
        return c;
    }
}