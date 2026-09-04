#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class Solution {
private:
    long long getLCM(long long a, long long b) {
        return (a / std::gcd(a, b)) * b;
    }

    // Counts how many valid values <= x can be formed
    long long countValid(long long x, const vector<int>& coins) {
        int n = coins.size();
        long long total = 0;

        // Iterate through all 2^n - 1 non-empty subsets
        for (int mask = 1; mask < (1 << n); mask++) {
            long long current_lcm = 1;
            int subset_size = 0;
            bool overflow = false;

            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    subset_size++;
                    current_lcm = getLCM(current_lcm, coins[i]);
                    if (current_lcm > x) {
                        overflow = true;
                        break;
                    }
                }
            }

            if (overflow) continue;

            if (subset_size % 2 == 1) {
                total += x / current_lcm;
            } else {
                total -= x / current_lcm;
            }
        }
        return total;
    }

public:
    long long findKthSmallest(vector<int>& coins, int k) {
        long long low = 1;
        long long high = 1LL * (*min_element(coins.begin(), coins.end())) * k;
        long long ans = high;

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (countValid(mid, coins) >= k) {
                ans = mid;
                high = mid - 1; // Try to find a smaller valid amount
            } else {
                low = mid + 1;  // Not enough amounts <= mid, increase range
            }
        }
        return ans;
    }
};