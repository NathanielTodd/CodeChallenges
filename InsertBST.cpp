// Given the root node of a binary search tree (BST) and a value to be inserted into the tree, insert the value into the BST. Return the root node of the BST after the insertion. It is guaranteed that the new value does not exist in the original BST.

// Note that there may exist multiple valid ways for the insertion, as long as the tree remains a BST after insertion. You can return any of them.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// Assuming the tree is balanced runtime is O(d) where is the depth
// d = log(n) where  n is number of nodes

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
                
        if(root==NULL){
            
            return new TreeNode(val);
            
        } else if(val < root->val){
           
            root->left = insertIntoBST(root->left, val);
            
        } else{
            
            root->right = insertIntoBST(root->right, val);
            
        }
        
        return root;
        
    }
};