class Solution {
    public List<String> fizzBuzz(int n) {
        List<String> x = new ArrayList<>();
        for(int i=1;i<=n;i++)
        {
            if(i%3==0 && i%5==0)
            x.add(i-1,"FizzBuzz");
            else if(i%3==0)
            x.add(i-1,"Fizz");
            else if(i%5==0)
            x.add(i-1,"Buzz");
            else
            x.add(i-1,String.valueOf(i));
        }
        return x;
    }
}