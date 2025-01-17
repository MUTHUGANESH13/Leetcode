class Solution {
public:
    int evalRPN(vector<string>& t) {
        vector<string>a;
        for(string i:t){
            if(i=="+"||i=="-"||i=="/"||i=="*"){
                int x=stoi(a.back());
                a.pop_back();
                int y=stoi(a.back());
                a.pop_back();
                if(i=="+")
                a.push_back(to_string(x+y));
                else if(i=="-")
                a.push_back(to_string(y-x));
                else if(i=="/")
                a.push_back(to_string(y/x));
                else if(i=="*")
                a.push_back(to_string(x*y));
            }
            else
            a.push_back(i);
        }
        return stoi(a.back());
    }
};