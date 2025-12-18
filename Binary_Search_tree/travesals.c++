#include<iostream>
#include<queue>
using namespace std;

class TreeNode{
    public:
        int data;
        TreeNode* left;
        TreeNode* right;

    TreeNode(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }    
};

TreeNode* insertIntoBST(TreeNode* root, int data){

    if(root == NULL){
        root = new TreeNode(data);
        return root; 
    }

    if(root->data>data){
        root->left = insertIntoBST(root->left, data);
    }
    else{
        root->right = insertIntoBST(root->right, data);
    }

    return root;
}

void BuildTree(TreeNode* &root){
    int data;
    cin>>data;

    while(data!=-1){
        root = insertIntoBST(root, data);
        cin>>data;
    }
    return;
}

void level_traversal(TreeNode* root){

    if(!root) return;
    queue<TreeNode*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        TreeNode* front = q.front();
        q.pop();
        
        if(!front){
            cout<<endl;
            if(!q.empty()) q.push(NULL);
        }
        else{
            cout<<front->data<<" ";
            if(front->left) q.push(front->left);
            if(front->right) q.push(front->right);
        }
    }
    return;
}

void inorder_traversal(TreeNode* root){

    if(!root) return;
    inorder_traversal(root->left);
    cout<<root->data<<" ";
    inorder_traversal(root->right);
}

void preorder_traversal(TreeNode* root){

    if(!root) return;
    cout<<root->data<<" ";
    inorder_traversal(root->left);
    inorder_traversal(root->right);
}

void postorder_traversal(TreeNode* root){

    if(!root) return;
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout<<root->data<<" ";
}

int main(){ 

    TreeNode* root = NULL;

    cout<<"Enter the data -> ";
    BuildTree(root);

    cout<<"Print the tree by level order"<<endl;
    level_traversal(root);

    cout<<endl;
    cout<<"Print Into the inorder traversal"<<endl;
    inorder_traversal(root);

    cout<<endl;
    cout<<"Print Into the Preorder traversal"<<endl;
    preorder_traversal(root);

    cout<<endl;
    cout<<"Print Into the Postorder traversal"<<endl;
    postorder_traversal(root);
    return 0;
}