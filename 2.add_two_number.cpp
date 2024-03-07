// https://leetcode.com/problems/add-two-numbers/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        queue<int> q1;
        queue<int> q2;
        vector<int> v;
        int carry = 0;
        while (l1 != NULL) {
            q1.push(l1->val);
            l1 = l1->next;
        }
        while (l2 != NULL) {
            q2.push(l2->val);
            l2 = l2->next;
        }
        while (!q1.empty() || !q2.empty() || carry > 0) {
            int sum = carry;
            if (!q1.empty()) {
                sum += q1.front();
                q1.pop();
            }
            if (!q2.empty()) {
                sum += q2.front();
                q2.pop();
            }

            v.push_back(sum % 10);
            carry = sum / 10;
        }
        ListNode* ans = new ListNode(0);
        ListNode* last = ans;
        for (int digit : v) {
            ListNode* t = new ListNode(digit);
            last->next = t;
            last = t;
        }
        return ans->next;
    }
};