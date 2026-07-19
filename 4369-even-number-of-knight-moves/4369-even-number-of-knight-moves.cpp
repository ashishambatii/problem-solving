class Solution {
public:
    int blackorwhite(int x,int y){
        if(x%2!=0 && y%2!=0)return 0;
        else if(x%2==0 && y%2==0)return 0;
        return 1;
    }
    // black -> 0 , white->1 
    bool canReach(vector<int>& start, vector<int>& target) {
        if(blackorwhite(start[0],start[1])==blackorwhite(target[0],target[1]))return true;
        return false;
    }
};