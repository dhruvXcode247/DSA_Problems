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
    ListNode* removeElements(ListNode* head, int val) {
      if (head==nullptr) return NULL;
      while(head && head->val==val) {
        ListNode *temp=head;
        head=head->next;
        temp->next=nullptr;
        delete(temp);
      }

      ListNode* temp=head;
        while(temp && temp->next) {
          if (temp->next->val==val) {
            ListNode *curr=temp->next;
            temp->next=temp->next->next;
            delete(curr);
          }
          else  {
            temp=temp->next;
          }
        }
      return head;
    }
};