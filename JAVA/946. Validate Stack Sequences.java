class Solution {
    public boolean validateStackSequences(int[] p, int[] d) {
        Deque<Integer>a=new ArrayDeque<>();
        int i=0;
        for(int x:p){
            a.push(x);
            if(a.peek()==d[i]){
                while(i<d.length){
                    if(a.size()!=0 && a.peek()==d[i]){
                        i++;
                        a.pop();
                    }
                    else
                    break;
                }
            }
        }
        while(i<d.length){
            if(a.peek()==d[i]){
                i++;
                a.pop();
            }
            else
            return false;
        }
        return a.size()==0;
    }
}