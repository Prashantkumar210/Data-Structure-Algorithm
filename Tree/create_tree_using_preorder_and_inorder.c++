#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to find an element's position in the inorder array
int find(int arr[], int element, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) return i;
    }
    return -1;
}

// Function to build the binary tree from preorder and inorder traversals
Node* buildTree(int preorder[], int inorder[], int &preindex, int inorderstart, int inorderEnd, int size) {
    if (preindex >= size || inorderstart > inorderEnd) return NULL;

    int element = preorder[preindex++];
    Node* root = new Node(element);
    int pos = find(inorder, element, size);

    // Recursively construct left and right subtrees
    root->left = buildTree(preorder, inorder, preindex, inorderstart, pos - 1, size);
    root->right = buildTree(preorder, inorder, preindex, pos + 1, inorderEnd, size);

    return root;
}

// Function to perform level-order traversal with level-wise output
void level_order(Node* root) {
    if (!root) return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node *temp = q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left ) q.push(temp->left); 
           if(temp->right ) q.push(temp->right); 
        }
    }    
}

int main() {
    int inorder[] = {40, 20, 50, 10, 60, 30, 70};
    int preorder[] = {10, 20, 40, 50, 30, 60, 70};

    int size = sizeof(preorder) / sizeof(preorder[0]);
    int preindex = 0;

    Node* root = buildTree(preorder, inorder, preindex, 0, size - 1, size);

    cout << "Print the Tree Level-wise:" << endl;
    level_order(root);

    return 0;
}
