/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 //Solution using recursivity ...
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
if (p == NULL && q == NULL) {
        return true; 
        }// two empty trees are identical (trivial)
if (p == NULL || q == NULL){// if one tree is empty and the other is not => non-identical
    return false;
    } 
if (p->val != q->val) { //if two values are different 
    return false;
    } 
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right); /* check recursivly left subtree and right subtree if both are identical then they're the same else they're not.*/
}
