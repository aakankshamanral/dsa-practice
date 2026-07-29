/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void postorder(int * arr ,struct TreeNode * root , int *n  ){
    if (root==NULL) return;
        postorder(arr,root->left , n);
        postorder(arr,root->right , n);
        arr[(*n)++] = root->val;
    
}
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = 0 ; 
    if (root==NULL) return NULL;
    int *arr = (int*)malloc(100 * sizeof(int));
    postorder(arr,root , returnSize );

    return arr;
}