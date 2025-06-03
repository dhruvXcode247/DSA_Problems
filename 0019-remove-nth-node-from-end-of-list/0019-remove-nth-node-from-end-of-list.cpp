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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;
        ListNode *prev=NULL;
        int count=0;
        while (temp!=nullptr) {
            count++;
            temp=temp->next;
        }
        if (count==n) {
            ListNode *newHead=head->next;
            delete(head);
            return newHead;
        }
        int res=count-n;
        temp=head;
        while (res-1) {
            temp=temp->next;
            res--;
        }
        ListNode *forward=temp->next;
        temp->next=temp->next->next;
        delete (forward);
        return head;
    }
};