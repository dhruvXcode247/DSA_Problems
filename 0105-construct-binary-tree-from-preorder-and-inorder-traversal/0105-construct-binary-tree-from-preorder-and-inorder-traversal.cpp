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
    TreeNode* BuildTree(vector<int>&preorder, int preStart, int preEnd, vector<int>&inorder, int inStart, int inEnd, 
        unordered_map<int,int>&inMpp) {
            if (preStart>preEnd || inStart>inEnd) return NULL;
            TreeNode* root=new TreeNode(preorder[preStart]);
            int inRoot=inMpp[root->val];
            int numsLeft=inRoot-inStart;

            root->left=BuildTree(preorder,preStart+1,preStart+numsLeft,inorder,inStart,inRoot-1,inMpp);
            root->right=BuildTree(preorder,preStart+numsLeft+1,preEnd,inorder,inRoot+1,inEnd,inMpp);
            return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>inMpp;
        for (int i=0;i<inorder.size();i++) {
            inMpp[inorder[i]]=i;
        }
        TreeNode* root=BuildTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,inMpp);
        return root;
    }
};