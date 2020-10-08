class Solution {
public:
    vector<int> vec;
    void Func(Node* root) {
        if (root == NULL) return;
        for (auto i : root->children) {
            Func(i);
        }
        vec.push_back(root->val);
    }

    vector<int> postorder(Node* root) {
        vec.clear();
        Func(root);
        return vec;
    }
};