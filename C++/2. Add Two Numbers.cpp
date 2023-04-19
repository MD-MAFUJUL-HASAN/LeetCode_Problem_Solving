class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* cur = new ListNode();
        ListNode* res = cur;
        int carry = 0;
        while (l1 || l2 || carry) {
            if (l1) {
                carry += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                carry += l2->val;
                l2 = l2->next;
            }
            int value = carry % 10;
            carry /= 10;
            cur->next = new ListNode(value);
            cur = cur->next;
        }
        return res->next;
    }
};
