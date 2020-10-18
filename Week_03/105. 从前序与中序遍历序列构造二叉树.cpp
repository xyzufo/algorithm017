class Solution {
public:
    unordered_map<int, int> map;
    int index;

    TreeNode* Func(vector<int>& pre, int l, int r) {
        if (l > r) return NULL;
        int pivot = map[pre[index]];
        TreeNode* root = new TreeNode(pre[index++]);
        root->left = Func(pre, l, pivot - 1);
        root->right = Func(pre, pivot + 1, r);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        index = 0;
        for (int i = 0; i < n; i++) {
            map[inorder[i]] = i;
        }
        return Func(preorder, 0, n - 1);
    }
};