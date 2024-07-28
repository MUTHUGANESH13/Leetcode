class Solution {
public:
    void sortColors(vector<int>& n) {
        sort(n.begin(),n.end());
       // cout<<"[";
        for(int i=0;i<n.size();i++)
        {
            cout<<n[i];
            if(i==n.size()-1)
            continue;
            else
            cout<<",";
        }
        cout<<"]";
    }
};