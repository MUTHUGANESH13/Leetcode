class Solution {
public:
    vector<int> addToArrayForm(vector<int>& n, int k) {
        int i=n.size()-1,r;
        bool c=false;
        while(k!=0 && i>=0){
            r=k%10;
            k/=10;
            if(c==true){
                n[i]=n[i]+1+r;
                if(n[i]>9){
                    n[i]%=10;
                    c=true;
                }
                else
                c=false;
                i--;
            }
            else{
                n[i]=n[i]+r;
                if(n[i]>9){
                    n[i]%=10;
                    c=true;
                }
                else
                c=false;
                i--;
            }
        }
        while(k!=0){
            r=k%10;
            k/=10;
            if(c==true){
                r++;
                if(n[i]>9){
                    n[i]%=10;
                    c=true;
                }
                else
                c=false;
                n.insert(n.begin(),r);
            }
            else{
                n.insert(n.begin(),r);
            }
        }
        while(i>=0){
            if(c==true){
                n[i]++;
                if(n[i]>9){
                    n[i]%=10;
                    c=true;
                }
                else
                c=false;
            }
            else
            break;
        }
        if(c==true)
        n.insert(n.begin(),1);
        return n;        
    }
};