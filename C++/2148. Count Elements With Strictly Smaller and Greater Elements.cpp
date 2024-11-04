class Solution {
public:
    int countElements(vector<int>& n) {
        if(n.size()<3)
        return 0;
        sort(n.begin(),n.end());
        if(n[0]==n.back())
        return 0;
        int i,c=0;
        for(i=1;i<n.size();i++){
            if(n[0]==n[i])
            c++;
            else
            break;
        }
        for(i=n.size()-2;i>=0;i--){
            if(n[n.size()-1]==n[i])
            c++;
            else
            break;
        }
        return(n.size()-c-2);
    }
};