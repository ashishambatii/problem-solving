class Solution {
public:
    int maxDistance(string moves) {
        int cnt=0;
        int x=0,y=0;
        int ans=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L'){
                x+=-1;
            }
            else if(moves[i]=='R')x+=1;
            else if(moves[i]=='D')y-=1;
            else if(moves[i]=='U')y+=1;
            else cnt++;
        }
        ans=(abs(x)+abs(y));
        return ans+cnt;
    }
};