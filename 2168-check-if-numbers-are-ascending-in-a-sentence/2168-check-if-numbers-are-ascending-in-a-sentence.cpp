class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int>nums;
        int prev =INT_MIN;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                int num=0;
               while(i<s.size() && isdigit(s[i])){
                  num= (s[i]-'0') + num*10;
                  i++;
               }
               if(prev>=num)return false;
               prev=num;
            }
        }
        return true;
    }
};