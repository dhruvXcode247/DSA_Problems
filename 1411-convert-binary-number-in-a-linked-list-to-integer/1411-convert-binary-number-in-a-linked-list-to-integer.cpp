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
    int getDecimalValue(ListNode* head) {
        int num=0,cnt=0;
        ListNode* temp=head;
        while (temp!=nullptr) {
            temp=temp->next;
            cnt++;
        }
        int multi=cnt;
        temp=head;
        for (int i=0;i<cnt;i++) {
            num+=temp->val*(1<<(multi-1));
            temp=temp->next;
            multi--;
        }
        return num;
    }
};