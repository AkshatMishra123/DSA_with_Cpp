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

//Tree height
int height(Node* root) {
    if (root == NULL) return 0;
    int leftHt = height(root -> left);
    int rightht = height(root -> right);

    return max(leftHt, rightht) + 1;
 }

int main() {
    
    vector<int> preOrder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    // Build the tree from preorder array
    Node* root = buildTree(preOrder);
    //call the function of preorder traversal
    
    cout << height(root) << endl;


    return 0;
}
