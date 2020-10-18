class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL) return NULL;
        if (root == p || root == q) return root;           //在同一支，父子孙节点

        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        if (left == NULL)  return right;
        else if (right == NULL) return left;
        else return root;    //root在p,q中间  (left!=NULL&&right!=NULL) 
    }
};
//left==NULL&&right==NULL   本题说给定的两个节点都存在，所以不需要考虑这种情况
