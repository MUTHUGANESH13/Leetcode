class Solution {
    public String reverseParentheses(String s) {
        List<Integer> a = new ArrayList<>();
        StringBuilder sb = new StringBuilder(s);
        for (int i = 0; i < sb.length(); i++) {
            if (sb.charAt(i) == '(') {
                a.add(i);
            } else if (sb.charAt(i) == ')') {
                int x = a.remove(a.size() - 1);
                // Use StringBuilder reverse method
                String reversed = new StringBuilder(sb.substring(x + 1, i)).reverse().toString();
                sb.replace(x + 1, i, reversed);
            }
        }
        StringBuilder result = new StringBuilder();
        for (int i = 0; i < sb.length(); i++) {
            char c = sb.charAt(i);
            if (c != '(' && c != ')') {
                result.append(c);
            }
        }
        return result.toString();
    }
}
