class TrieNode {
public:
    TrieNode* child[26];
    bool isterminal;

    TrieNode() {
        isterminal = false;
        for (int i = 0; i < 26; i++)
            child[i] = nullptr;
    }
};

class Solution {
public:
    TrieNode* root = new TrieNode();

    void insert(string s) {
        TrieNode* p = root;

        for (char c : s) {
            int idx = c - 'a';

            if (!p->child[idx])
                p->child[idx] = new TrieNode();

            p = p->child[idx];
        }

        p->isterminal = true;
    }

    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";

        for (string &s : strs)
            insert(s);

        string ans = "";
        TrieNode* p = root;

        while (true) {
            int cnt = 0;
            int next = -1;

            for (int i = 0; i < 26; i++) {
                if (p->child[i]) {
                    cnt++;
                    next = i;
                }
            }

            if (cnt != 1 || p->isterminal)
                break;

            ans += char(next + 'a');
            p = p->child[next];
        }

        return ans;
    }
};