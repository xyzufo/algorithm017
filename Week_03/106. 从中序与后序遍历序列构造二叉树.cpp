class Solution {
public:
    unordered_map<int, int> map;
    int index;

    TreeNode* Func(vector<int>& post, int l, int r) {
        if (l > r) return NULL;
        int pivot = map[post[index]];
        TreeNode* root = new TreeNode(post[index--]);
        root->right = Func(post, pivot + 1, r);
        root->left = Func(post, l, pivot - 1);
        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        index = n - 1;
        for (int i = 0; i < n; i++) {
            map[inorder[i]] = i;
        }
        return Func(postorder, 0, n - 1);
    }
};