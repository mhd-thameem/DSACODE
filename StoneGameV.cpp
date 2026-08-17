#include <vector>
#include <numeric>
#include <algorithm>
#include <cstring>

using namespace std;

class Solution {
    int memo[501][501];
    int pref[501];

    int getSum(int l, int r) {
        return pref[r + 1] - pref[l];
    }

    int solve(int l, int r, const vector<int>& stoneValue) {
        if (l == r) return 0;
        if (memo[l][r] != -1) return memo[l][r];

        int maxScore = 0;

        for (int k = l; k < r; ++k) {
            int leftSum = getSum(l, k);
            int rightSum = getSum(k + 1, r);

            if (leftSum < rightSum) {
                maxScore = max(maxScore, leftSum + solve(l, k, stoneValue));
            } else if (leftSum > rightSum) {
                maxScore = max(maxScore, rightSum + solve(k + 1, r, stoneValue));
            } else {
                // If sums are equal, Alice can pick either side
                int takeLeft = leftSum + solve(l, k, stoneValue);
                int takeRight = rightSum + solve(k + 1, r, stoneValue);
                maxScore = max({maxScore, takeLeft, takeRight});
            }
        }

        return memo[l][r] = maxScore;
    }

public:
    int stoneGameV(vector<int>& stoneValue) {
        int n = stoneValue.size();
        memset(memo, -1, sizeof(memo));

        pref[0] = 0;
        for (int i = 0; i < n; ++i) {
            pref[i + 1] = pref[i] + stoneValue[i];
        }

        return solve(0, n - 1, stoneValue);
    }
};