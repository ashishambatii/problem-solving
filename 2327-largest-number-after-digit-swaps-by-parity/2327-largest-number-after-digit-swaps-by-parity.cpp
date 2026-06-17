class Solution {
public:
    
    int largestInteger(int num) {
        string s=to_string(num);
        vector<bool>v;
        for(int i=0;i<s.size();i++){
            bool flag=((s[i]-'0')%2==0);
            v.push_back(flag);
        }
        priority_queue<int>even;
        priority_queue<int>odd;
        string ans="";
        for(int i=0;i<s.size();i++){
          if(v[i]){
            even.push(s[i]-'0');
          }
          else{
            odd.push(s[i]-'0');
          }
        }
        for(int i=0;i<s.size();i++){
            if(v[i]){
                ans+=to_string(even.top());
                even.pop();
            }
            else{
                ans+=to_string(odd.top());
                odd.pop();
            }
        }
        return stoi(ans);
    }
};