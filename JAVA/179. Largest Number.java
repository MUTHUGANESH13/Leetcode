class Solution {
        public static boolean compare(String a, String b) {
        return (a + b).compareTo(b + a) > 0;
    }
    public String largestNumber(int[] n) {
     List<String> a = new ArrayList<>();
        for (int i : n) {
            a.add(Integer.toString(i));
        }
        a.sort((x, y) -> compare(x, y) ? -1 : 1);
        if (a.get(0).equals("0")) {
            return "0";
        }
        String b="";
        for (String s : a) {
            b+=s;
        }

        return b;
    }
}