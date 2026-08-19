class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string>dead(deadends.begin(),deadends.end());
        unordered_set<string>vis;

        queue<string>q;
        if(dead.count("0000"))return -1;
        q.push("0000");
        vis.insert("0000");
        int moves=0;
        while(!q.empty()){
            int size = q.size();
            while(size--){
                string curr = q.front();
                q.pop();
                if(curr==target){
                    return moves;
                }
                for(int i=0;i<4;i++){
                    string next = curr;
                    if(next[i]=='9'){
                        next[i]='0';
                    }
                    else{
                        next[i]++;
                    }

                    if(!dead.count(next) && !vis.count(next)){
                        vis.insert(next);
                        q.push(next);
                    }
                    next= curr;
                    if(next[i]=='0'){
                        next[i]='9'; 
                    }
                    else{
                        next[i]--;
                    }
                    if(!dead.count(next) && !vis.count(next)){
                        vis.insert(next);
                        q.push(next);
                    }
                }
            }
            moves++;
        }
        return -1;
    }
};