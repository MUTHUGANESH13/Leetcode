class Solution {
    public int longestSquareStreak(int[] nums) {
        Set<Integer>n=new HashSet<>();
        for(int i:nums){
            n.add(i);
        }
        int m=0,k,t;
        for(Integer i:n){
            t=i;
            k=0;
            while(n.contains(t)){
                k++;
                if(t>Integer.MAX_VALUE/t)
                break;
                t=t*t;
            }
            if(k>m)
            m=k;
        }
        if(m==1)
        return -1;
        return m;
    }
}