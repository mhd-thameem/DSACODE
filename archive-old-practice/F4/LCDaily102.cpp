class Solution {
public:
    string lexPalindromicPermutation(string s, string target) {
        int n = s.length();
        int m = n / 2;
        vector<int> count(26, 0);
        for (char c : s) count[c - 'a']++;

        // 1. Validate palindrome feasibility
        int odd_count = 0;
        char mid_char = 0;
        for (int i = 0; i < 26; i++) {
            if (count[i] % 2 != 0) {
                odd_count++;
                mid_char = 'a' + i;
            }
        }
        if ((n % 2 == 0 && odd_count > 0) || (n % 2 == 1 && odd_count > 1)) {
            return "";
        }

        // Half-frequency bank for first half
        vector<int> half_count(26, 0);
        for (int i = 0; i < 26; i++) {
            half_count[i] = count[i] / 2;
        }

        string best = "";

        // Helper to construct full palindrome from first half
        auto build_palindrome = [&](const string& first_half) {
            string res = first_half;
            if (n % 2 == 1) res += mid_char;
            for (int i = m - 1; i >= 0; i--) {
                res += first_half[i];
            }
            return res;
        };

        // --- CASE 1: Exact first half match ---
        auto bank = half_count;
        bool can_match_prefix = true;
        string first_half = "";
        for (int i = 0; i < m; i++) {
            int c_idx = target[i] - 'a';
            if (bank[c_idx] > 0) {
                bank[c_idx]--;
                first_half += target[i];
            } else {
                can_match_prefix = false;
                break;
            }
        }

        if (can_match_prefix) {
            string pal = build_palindrome(first_half);
            if (pal > target) {
                best = pal;
            }
        }

        // --- CASE 2: Find rightmost pivot index i to increase ---
        for (int i = m - 1; i >= 0; i--) {
            // Recompute bank if we match target[0 ... i-1]
            bank = half_count;
            bool valid_prefix = true;
            for (int j = 0; j < i; j++) {
                int c_idx = target[j] - 'a';
                if (bank[c_idx] > 0) {
                    bank[c_idx]--;
                } else {
                    valid_prefix = false;
                    break;
                }
            }
            if (!valid_prefix) continue;

            // Try picking smallest character > target[i]
            int pivot_c = -1;
            for (int c = (target[i] - 'a') + 1; c < 26; c++) {
                if (bank[c] > 0) {
                    pivot_c = c;
                    break;
                }
            }

            if (pivot_c != -1) {
                string fh = target.substr(0, i);
                fh += (char)('a' + pivot_c);
                bank[pivot_c]--;

                // Fill remaining positions (i+1 to m-1) with smallest available letters
                for (int c = 0; c < 26; c++) {
                    while (bank[c] > 0) {
                        fh += (char)('a' + c);
                        bank[c]--;
                    }
                }

                string pal = build_palindrome(fh);
                if (best == "" || pal < best) {
                    best = pal;
                }
                // Because we go right-to-left, the first valid pivot found in this loop
                // gives the longest matching prefix (smallest total string).
                break;
            }
        }

        return best;
    }
};