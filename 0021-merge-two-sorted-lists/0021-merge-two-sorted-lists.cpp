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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(-1);
        ListNode* temp=&dummy;
        if (list1==nullptr) return list2;
        else if (list2==nullptr) return list1;
        while(list1 && list2) {
            if (list2->val <= list1->val) {
                temp->next=list2;
                list2=list2->next;
            }
            else {
                temp->next=list1;
                list1=list1->next;
            }
            temp=temp->next;
        }
        while (list1!=nullptr) {
            temp->next=list1;
            temp=temp->next;
            list1=list1->next;
        }
        while (list2!=nullptr) {
            temp->next=list2;
            temp=temp->next;
            list2=list2->next;
        }
        return dummy.next;
    }
};