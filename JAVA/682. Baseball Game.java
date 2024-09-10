import java.util.Stack;

class Solution {
    public int calPoints(String[] o) {
        Stack<Integer> d = new Stack<>();
        int s = 0;
        
        for (int i = 0; i < o.length; i++) {
            if (o[i].equals("+")) {
                int x = d.get(d.size() - 2) + d.get(d.size() - 1);
                d.push(x);
            } else if (o[i].equals("D")) {
                int x = d.peek();
                d.push(x * 2);
            } else if (o[i].equals("C")) {
                d.pop();
            } else {
                int x = Integer.parseInt(o[i]);
                d.push(x);
            }
        }
        
        for (int i : d) {
            s += i;
        }
        
        return s;
    }
}
