class Solution {
    public String categorizeBox(int l, int w, int h, int m) {
         long g=l;
         g=g*w*h;
         boolean x=false,y=false; 
         if(g>=1000000000)
        x=true;
        else if(l>=10000 || w>=10000 ||h>=10000)
        x=true;
        if(m>=100)
        y=true;
        if(x==true && y==true)
        return "Both";
        else if(x==false && y==false)
        return "Neither";
        else if(x==false && y==true)
        return "Heavy";
        else
        return "Bulky";      
    }
}