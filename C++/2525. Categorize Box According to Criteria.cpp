class Solution {
public:
    string categorizeBox(int l, int w, int h, int m) {
        int b=0,H=0;
        long int g=l;
        g=g*w*h;
        if(g>=1000000000)
        b++;
        else if(l>=10000 || w>=10000 ||h>=10000)
        b++;
        if(m>=100)
        H++;
        if(b!=0 && H!=0)
        return "Both";
        else if(b==0 && H==0)
        return "Neither";
        else if(b==0 && H!=0)
        return "Heavy";
        else
        return "Bulky";
    }
};