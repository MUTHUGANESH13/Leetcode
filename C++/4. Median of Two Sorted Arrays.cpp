class Solution {
public:
    double findMedianSortedArrays(vector<int>& n1, vector<int>& n2) {
        int i,n;
        double p;
        for(i=0;i<n2.size();i++)
        {
            n1.push_back(n2[i]);
        }
        sort(n1.begin(),n1.end());
        n=n1.size();
        if(n%2==0)
        {
            n=n/2;
            p=n1[n-1]+n1[n];
            return(p/2);
        }
        else
        {
            n=n/2;
            p=n1[n];
            return(p);
        }

    }
};