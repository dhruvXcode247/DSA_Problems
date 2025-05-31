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
    ListNode* oddEvenList(ListNode* head) {
        if (head==NULL || head->next==nullptr) return head;
        ListNode *odd=head,*even=head->next;
        ListNode *evenHead=head->next;
        while (even!=nullptr && even->next!=nullptr) {
            odd->next=odd->next->next;
            even->next=even->next->next;

            odd=odd->next;
            even=even->next;
        }
        odd->next=evenHead;
        return head;
    }
};