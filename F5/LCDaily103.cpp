class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n = nums.size();

        // Store indices
        vector<int> indices(n);

        for (int i = 0; i < n; i++) {
            indices[i] = i;
        }

        // Sort indices according to their values
        sort(indices.begin(), indices.end(), [&](int a, int b) {
            return nums[a] < nums[b];
        });

        vector<int> ans(n);

        int i = 0;

        while (i < n) {

            int j = i + 1;

            // Find the complete group
            while (j < n &&
                   nums[indices[j]] - nums[indices[j - 1]] <= limit) {
                j++;
            }

            // Get original indices of this group
            vector<int> groupIndices(
                indices.begin() + i,
                indices.begin() + j
            );

            // Put positions in original order
            sort(groupIndices.begin(), groupIndices.end());

            // Values are already sorted because indices[] is value-sorted
            for (int k = i; k < j; k++) {
                ans[groupIndices[k - i]] = nums[indices[k]];
            }

            i = j;
        }

        return ans;
    }
};