class Solution {
public:
    bool isRobotBounded(string i) {
        int x=0,y=0,j;
        char d='u';
        for(j=0;j<i.size();j++){
            if(i[j]=='G'){
                if(d=='u')
                x++;
                else if(d=='d')
                x--;
                else if(d=='l')
                y--;
                else
                y++;
            }
            else if(i[j]=='R'){
                if(d=='u')
                d='r';
                else if(d=='d')
                d='l';
                else if(d=='l')
                d='u';
                else
                d='d';
            }
            else if(i[j]=='L'){
                if(d=='u')
                d='l';
                else if(d=='d')
                d='r';
                else if(d=='r')
                d='u';
                else
                d='d';
            }
        }
        return (x==0 && y==0 || d!='u');
    }
};