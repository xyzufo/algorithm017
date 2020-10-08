class Solution {
public:
    vector<int> vec;

    void Func(Node* root) {
        if (root == NULL) return;
        vec.push_back(root->val);
        for (auto i : root->children) {
            Func(i);
        }
    }

    vector<int> preorder(Node* root) {
        vec.clear();
        Func(root);
        return vec;
    }
};