/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        ListNode* prev = nullptr;

        for (int count = 0; count < n; count++) {
            temp2 = temp2->next;
        }

        while (temp2 != nullptr) {
            prev = temp1;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        // If temp1 is the head
        if (prev == nullptr) {
            return head->next;
        }

        // Remove temp1
        prev->next = temp1->next;

        return head;
    }
};