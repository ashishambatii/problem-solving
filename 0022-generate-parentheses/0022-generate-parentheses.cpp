class Solution {
public:
    void gen(vector<string>&ss, string s, int n, int x, int y) {
        if(y == n) ss.push_back(s);

        if(x > y) gen(ss, s + ')', n, x, y + 1);
        if(x < n) gen(ss, s + '(', n, x + 1, y);
    } 
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        gen(res, "", n, 0, 0);

        return res;
    }
};