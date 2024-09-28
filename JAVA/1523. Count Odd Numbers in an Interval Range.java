class Solution {
    public int countOdds(int l, int h) {
        if(l>h)return 0;
        if(l==h){
            if(l%2==0)return 0;
            else return 1;
        }
        int d,s=0;
        if(h%2!=0){
            s++;
            h--;
        }
        if(l%2!=0){
            s++;
            l++;
        }
        d=(h-l)/2;
        return d+s;
    }
}