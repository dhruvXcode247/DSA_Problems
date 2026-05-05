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
    ListNode *findnthNode(ListNode *temp,int k) {
        int len=1;
        while(temp!=nullptr) {
            if (len==k) return temp;
            temp=temp->next;
            len++;
        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *temp=head;
        if (head==NULL || k==0) return head;
        int count=1;
        while(temp->next!=NULL) {
            ListNode *prev=temp;
            count++;
            temp=temp->next;
        }
        if(k%count==0) return head;
        k=k%count;
        temp->next=head;
        ListNode* newTailNode=findnthNode(head,count-k);
        head=newTailNode->next;
        newTailNode->next=nullptr;
        return head;
    }
};