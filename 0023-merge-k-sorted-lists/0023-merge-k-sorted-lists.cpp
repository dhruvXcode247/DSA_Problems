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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>arr;
        for (auto it1:lists) {
            while (it1!=nullptr) {
                arr.emplace_back(it1->val);
                it1=it1->next;
            }
        }
        sort(arr.begin(),arr.end());
        ListNode* head=new ListNode(0);
        ListNode* temp=head;
        for (int i=0;i<arr.size();i++) {
            temp->next=new ListNode(arr[i]);
            temp=temp->next;
        }
        return head->next;
    }
};