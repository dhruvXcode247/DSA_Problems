/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root,int &count, int &res,int k) {
        if (!root) return;
        inorder(root->left,count,res,k);
        count++;
        if (count==k) {
            res=root->val;
            return;
        }
        inorder(root->right,count,res,k);
    }

    int kthSmallest(TreeNode* root, int k) {
        int count=0,res=-1;
        inorder(root,count,res,k);
        return res;
        // priority_queue<int>pq(ans.begin(),ans.end());
        // int n=ans.size(),pops=n-k;
        // while (pops) {
        //     pq.pop();
        //     pops--;
        // }
        // return pq.top();
    }
};