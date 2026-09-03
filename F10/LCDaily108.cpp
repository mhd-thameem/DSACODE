class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        int minOdd = INT_MAX;

        // Find the smallest odd number
        for (int x : nums1) {
            if (x % 2 == 1) {
                minOdd = min(minOdd, x);
            }
        }

        // No odd numbers -> everything is even
        if (minOdd == INT_MAX) {
            return true;
        }

        // If an even number is smaller than minOdd,
        // it cannot subtract an odd number.
        for (int x : nums1) {
            if (x % 2 == 0 && x < minOdd) {
                return false;
            }
        }

        return true;
    }
};