
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        int n = s.size();
        int k = p.size();

        if (k > n) return ans;

        int freq[26] = {0};
        for (char c : p) {
            freq[c - 'a']++;
        }
        int l = 0;

        for (int r = 0; r < n; r++) {

            
            freq[s[r] - 'a']--;

            if (r - l + 1 > k) {
                freq[s[l] - 'a']++;
                l++;
            }
            if (r - l + 1 == k) {

                bool valid = true;

                for (int i = 0; i < 26; i++) {
                    if (freq[i] != 0) {
                        valid = false;
                        break;
                    }
                }

                if (valid) {
                    ans.push_back(l);
                }
            }
        }

        return ans;
    }
};
