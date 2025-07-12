#include<iostream>
#include<vector>
#include<queue>
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

//preOrder Treaversal
void LevelOrder(Node* root) {

    queue<Node*> q;
    q.push(root);
    while(q.size() > 0){
        Node* curr = q.front();
        q.pop();
        cout << curr->data << " ";
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right !=  NULL){
            q.push(curr->right);
        }
    }
    cout << endl;
}

int main() {
    
    vector<int> preOrder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    // Build the tree from preorder array
    Node* root = buildTree(preOrder);
    //call the function of In order traversal
    LevelOrder(root);
    cout << endl;


    return 0;
}
