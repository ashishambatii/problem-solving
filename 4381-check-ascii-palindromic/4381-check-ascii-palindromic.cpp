class Solution {
public:
    string charToBinary(char c) {
    string ans = "";

    for(int i = 7; i >= 0; i--) {
        ans += ((c >> i) & 1) + '0';
    }

    return ans;
}
    bool isPalindromic(string s) {
      string bin ="";
      for(int i=0;i<s.size();i++){
        bin+=charToBinary(s[i]);
      }
      string dup = bin;
      reverse(dup.begin(),dup.end());
      return dup==bin;
    }
};