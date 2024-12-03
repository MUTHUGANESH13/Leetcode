class Solution {
    int i=0;
    public boolean parseBoolExpr(String e) {
        return p(e);
    }
    private boolean p(String e){
        if(e.charAt(i)=='t'){
            i++;
            return true;
        }
        if(e.charAt(i)=='f'){
            i++;
            return false;
        }
        if(e.charAt(i)=='!'){
            i+=2;
            boolean a=!p(e);
            i++;
            return a;
        }
        boolean is=e.charAt(i)=='&';
        boolean a=is;
        i+=2;
        while(e.charAt(i)!=')'){
            boolean pa=p(e);
            if(is)
            a&=pa;
            else
            a|=pa;
            if(e.charAt(i)==',')
            i++;
        }
        i++;
        return a;
    }
}