#include<iostream>
#include<vector>
using namespace std;

// Definition of a binary tree node
class Node {
    public:
        int data;
        Node* left; 
        Node* right;

        // Constructor to initialize a node with a value
        Node(int val){
            data = val;
            left = right = NULL;
        }
};

// Global index used to track position in preorder traversal during tree construction
static int idx = -1;

// Function to build a binary tree from a preorder traversal with -1 as NULL marker
Node* buildTree(vector<int>& preOrder){
    idx++;

    // Base case: if current value is -1, return NULL (no node here)
    if(preOrder[idx] == -1) return NULL;

    // Create a new node with the current value
    Node* root = new Node(preOrder[idx]);

    // Recursively build the left subtree
    root->left = buildTree(preOrder);

    // Recursively build the right subtree
    root->right = buildTree(preOrder);

    // Return the constructed subtree rooted at 'root'
    return root;
}
//Transform to Sum tree
int sumTree(Node* root){
    //base case
    if(root == NULL) return 0;
    int oldVal = root->data;
    int LeftSum = sumTree(root->left);
    int RightSum = sumTree(root->right);
    root->data = LeftSum + RightSum;

    return root->data + oldVal;

}

// Helper function to print preorder traversal
void printPreOrder(Node* root) {
    if (root == NULL) return;

    cout << root->data << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

int main() {
    vector<int> preOrder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    // Build the tree from preorder array
    Node* root = buildTree(preOrder);

    cout << "Preorder before Sum Tree Conversion: ";
    printPreOrder(root);
    cout << endl;

    // Convert to Sum Tree
    sumTree(root);

    cout << "Preorder after Sum Tree Conversion: ";
    printPreOrder(root);
    cout << endl;

    return 0;
}
