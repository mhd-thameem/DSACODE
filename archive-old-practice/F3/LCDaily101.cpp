#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        int n = s.size();
        if (n != (int)target.size()) return "";

        // Frequency table of characters available in s
        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }

        // Try prefix matches of length len = n - 1 down to 0
        // Find the deepest point where we can pick a character strictly greater than target[len]
        for (int len = n - 1; len >= 0; len--) {
            vector<int> rem_freq = freq;
            bool can_match_prefix = true;

            // Check if we can form target[0 ... len - 1]
            for (int i = 0; i < len; i++) {
                int c = target[i] - 'a';
                if (--rem_freq[c] < 0) {
                    can_match_prefix = false;
                    break;
                }
            }

            if (!can_match_prefix) {
                continue;
            }

            // Find the smallest character > target[len] among remaining
            int next_char = -1;
            for (int c = target[len] - 'a' + 1; c < 26; c++) {
                if (rem_freq[c] > 0) {
                    next_char = c;
                    break;
                }
            }

            if (next_char != -1) {
                // 1. Prefix: target[0 ... len - 1]
                string res = target.substr(0, len);
                
                // 2. Divergent character: next_char
                res += (char)('a' + next_char);
                rem_freq[next_char]--;

                // 3. Suffix: remaining characters in ascending sorted order
                for (int c = 0; c < 26; c++) {
                    while (rem_freq[c] > 0) {
                        res += (char)('a' + c);
                        rem_freq[c]--;
                    }
                }

                return res;
            }
        }

        return "";
    }
};