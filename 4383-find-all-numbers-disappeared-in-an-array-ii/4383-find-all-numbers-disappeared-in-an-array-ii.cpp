class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>> ans;
        int k = 0;
        int n = nums.size();
        int a = lower;

        sort(nums.begin(), nums.end());

        while (a <= upper) {
            vector<int> fr;

            if (k < n) {
                int low = nums[k];

                // skip numbers below lower
                if (low < lower) {
                    k++;
                    continue;
                }

                // skip duplicates
                if (k > 0 && nums[k] == nums[k - 1]) {
                    k++;
                    continue;
                }

                // if current number is beyond upper
                if (low > upper) {
                    while (a <= upper) {
                        fr.push_back(a);
                        a++;
                    }

                    if (!fr.empty()) {
                        ans.push_back(fr);
                    }

                    break;
                }

                while (a < low) {
                    fr.push_back(a);
                    a++;
                }

                if (!fr.empty()) {
                    ans.push_back(fr);
                }

                a++;
                k++;
            }
            else {
                while (a <= upper) {
                    fr.push_back(a);
                    a++;
                }

                if (!fr.empty()) {
                    ans.push_back(fr);
                }
            }
        }

        vector<vector<int>> as;

        for (int i = 0; i < ans.size(); i++) {
            int b = ans[i].size() - 1;

            vector<int> nam;
            nam.push_back(ans[i][0]);
            nam.push_back(ans[i][b]);

            as.push_back(nam);
        }

        return as;
    }
};