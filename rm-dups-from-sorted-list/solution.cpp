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

 ListNode* deleteDuplicates(ListNode* head) {

    if(head == NULL)
        return head;

    ListNode* pLeft = head;
    ListNode* pRight = head->next;

    while(pRight != NULL) {

        if(pLeft->val == pRight->val) {
            ListNode* duplicate = pRight;
            pLeft->next = pRight->next;
            pRight = pRight->next;
            std::exchange(duplicate, nullptr);
        }
        else {
            pLeft = pLeft->next;
            pRight = pRight->next;
        }
    }

    return head;
}
