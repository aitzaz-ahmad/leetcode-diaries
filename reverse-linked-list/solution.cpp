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

 ListNode* reverseList(ListNode* head) {
    if(head == NULL || head->next == NULL)
        return head;

    auto values = vector<int>{};
    for(auto it = head; it != NULL; it = it->next)
        values.emplace_back(it->val);

    auto reversed = new ListNode(values.back());
    auto rHead = reversed;
    std::for_each(std::next(values.crbegin()),
                  values.crend(),
                  [&rHead](const auto key) {
                      rHead->next = new ListNode(key);
                      rHead = rHead->next;
                  });

    return reversed;
}
