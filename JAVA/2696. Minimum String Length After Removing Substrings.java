class Solution {
    public int minLength(String s) {
        Stack<Character>a=new Stack<Character>();
        for(char c:s.toCharArray()){
            if(!a.empty()){
                if((a.peek()=='A' && c=='B')||(a.peek()=='C' && c=='D'))
                a.pop();
                else
                a.push(c);
            }
            else
                a.push(c);
        }
        return a.size();
    }
}