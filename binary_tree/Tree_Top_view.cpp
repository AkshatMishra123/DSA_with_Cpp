#include <iostream>
#include <queue>
#include <map>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) {
        val = x;
        left = right = NULL;
    }
};

void topView(TreeNode* root) {
    if (root == NULL)
        return;

    // Map to store the first node at each horizontal distance
    map<int, int> topNode;

    // Queue to store pairs of node and its horizontal distance
    queue<pair<TreeNode*, int>> q;

    q.push({root, 0}); // root is at horizontal distance 0

    while (!q.empty()) {
        auto front = q.front();
        q.pop();

        TreeNode* node = front.first;
        int hd = front.second;

        // If this HD is not yet in map, insert it
        if (topNode.find(hd) == topNode.end()) {
            topNode[hd] = node->val;
        }

        // Push left and right children with updated HDs
        if (node->left)
            q.push({node->left, hd - 1});
        if (node->right)
            q.push({node->right, hd + 1});
    }

    // Print the top view from leftmost HD to rightmost
    for (auto it : topNode) {
        cout << it.second << " ";
    }
    cout << endl;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->left->right->right = new TreeNode(5);
    root->left->right->right->right = new TreeNode(6);

    cout << "Top View: ";
    topView(root);

    return 0;
}
