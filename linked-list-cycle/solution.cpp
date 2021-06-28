/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 bool hasCycle(ListNode *head) {
        if(head == NULL ||
           head->next == NULL ||
           head->next->next == NULL)
            return false;

        using pln = ListNode*;
        pln slow = head;
        pln fast = head->next->next;

        while (fast && slow)
        {
            if(slow == fast)
                return true;

            fast = (fast->next != NULL) ? fast->next->next : fast->next;
            slow = slow->next;
        }

        return false;
    }
