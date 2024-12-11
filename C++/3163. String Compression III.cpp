class Solution {
public:
    string compressedString(string w) {
        int c=1;
        string s="";
        for(int i=0;i<w.size()-1;i++){
            if(w[i]==w[i+1])
            c++;
            else{
                if(c!=0){                
                s+=to_string(c);
                s+=w[i];
                c=1;}
                else
                c=1;
            }
            if(c>=9){
                s+=to_string(c);
                s+=w[i];
                c=0;
            }
        }
        if(c!=0){
        s+=to_string(c);
        s+=w.back();}
        return s;
    }
};