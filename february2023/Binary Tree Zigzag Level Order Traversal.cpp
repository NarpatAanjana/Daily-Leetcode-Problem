class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> result;
    if (root == NULL) return result;

    queue<TreeNode*> q;
    q.push(root);
    bool isReverse = false; // flag to determine zigzag direction

    while (!q.empty()) {
        int size = q.size();
        vector<int> level(size);

        for (int i = 0; i < size; i++) {
            TreeNode* node = q.front();
            q.pop();

            int index = isReverse ? size - i - 1 : i; // calculate node index based on direction
            level[index] = node->val;

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        result.push_back(level);
        isReverse = !isReverse; // change direction for the next level
    }

    return result; 
    }
};
