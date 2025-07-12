#include<iostream>
#include<vector>
using namespace std;

// Definition of a binary tree node
class Node {
    public:
        int data;
        Node* left; 
        Node* right;
        Node(int val){
            data = val;
            left = right = NULL;
        }
};

static int idx = -1;
Node* buildTree(vector<int>& preOrder){
    idx++;
    if(preOrder[idx] == -1) return NULL;

    Node* root = new Node(preOrder[idx]);
    root->left = buildTree(preOrder);
    root->right = buildTree(preOrder);

    return root;
}

//tree node sum
int NodeSum(Node* root) {
    if (root == NULL) return 0;
    int leftSum = NodeSum(root -> left);
    int rightSum = NodeSum(root -> right);

    return leftSum + rightSum + root->data;
 }

int main() {
    
    vector<int> preOrder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    // Build the tree from preorder array
    Node* root = buildTree(preOrder);
    
    cout << "sum of nodes: " << NodeSum(root) << endl;


    return 0;
}
