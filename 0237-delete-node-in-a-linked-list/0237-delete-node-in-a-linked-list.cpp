/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    // struct ListNode {
    //     int val;
    //     ListNode *next;

    //     ListNode(int val1,ListNode *next1) {
    //         val=val1;
    //         next=next1;
    //     }

    //     ListNode(int val1) {
    //         val=val1;
    //         next=nullptr;
    //     }
    // };

    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
    }
};