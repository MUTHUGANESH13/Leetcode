class Solution {
    public int evalRPN(String[] t) {
        Stack<String> a = new Stack<>();
        for (String i : t) {
            if (i.equals("+") || i.equals("-") || i.equals("/") || i.equals("*")) {
                int x = Integer.parseInt(a.pop());
                int y = Integer.parseInt(a.pop());
                if (i.equals("+")) a.push(String.valueOf(x + y));
                else if (i.equals("-")) a.push(String.valueOf(y - x));
                else if (i.equals("/")) a.push(String.valueOf(y / x));
                else if (i.equals("*")) a.push(String.valueOf(x * y));
            } else {
                a.push(i);
            }
        }
        return Integer.parseInt(a.pop());
    }
}
