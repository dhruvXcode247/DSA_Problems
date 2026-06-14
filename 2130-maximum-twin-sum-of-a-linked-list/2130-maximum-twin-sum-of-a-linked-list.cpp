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
    ListNode *reverse(ListNode* head) {
        ListNode* newnode=head;
        ListNode* prev=nullptr;
        while (newnode!=nullptr) {
            ListNode* front=newnode->next;
            newnode->next=prev;
            prev=newnode;
            newnode=front;
        }
        return prev;
    }
    int pairSum(ListNode* head) {
        int sum=0,cnt=0;
        ListNode* temp=head;
        while (temp!=nullptr) {
            temp=temp->next;
            cnt++;
        }
        int i=0;
        temp=head;
        while (i!=cnt/2-1) {
            temp=temp->next;
            i++;
        }
        ListNode* node=temp->next;
        temp->next=reverse(node);
        ListNode* move=temp->next;
        temp=head;
        while (move!=nullptr) {
            sum=max(sum,temp->val+move->val);
            temp=temp->next;
            move=move->next;
        }
        return sum;
    }
};