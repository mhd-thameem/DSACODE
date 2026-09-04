class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        int minDistance = INT_MAX;
        int firstCritical = -1;
        int previousCritical = -1;

        int position = 1;

        ListNode* prev = head;
        ListNode* curr = head->next;

        while (curr->next != nullptr) {

            // Check if curr is a critical point
            if ((curr->val > prev->val && curr->val > curr->next->val) ||
                (curr->val < prev->val && curr->val < curr->next->val)) {

                // First critical point
                if (firstCritical == -1) {
                    firstCritical = position;
                }

                // We already found a previous critical point
                if (previousCritical != -1) {
                    minDistance = min(
                        minDistance,
                        position - previousCritical
                    );
                }

                previousCritical = position;
            }

            prev = curr;
            curr = curr->next;
            position++;
        }

        // Fewer than 2 critical points
        if (firstCritical == -1 || firstCritical == previousCritical) {
            return {-1, -1};
        }

        int maxDistance = previousCritical - firstCritical;

        return {minDistance, maxDistance};
    }
};