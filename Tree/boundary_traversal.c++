#include<iostream>
#include<queue>

using namespace std;

class Node{
    
    public:
        int data;
        Node* left;
        Node* right;


    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;

    }
};

// void level_order_traversal(Node* root){
//     queue<Node*>q;

//     q.push(root);

//     while(!q.empty()){

//         Node* temp = q.front();
//         q.pop();
//         cout<<temp->data<<" ";


//         if(temp->left){
//             q.push(temp->left);
//         }
//         if(temp->right){
//             q.push(temp->right);
//         }
//     }
// }


void leftside(Node* root){

   if(!root) return;

   cout<<root->data<<" ";
   if(root->left){
     root = root->left;
   }
   else{
        if(root->right) root = root->right;
   }
}

void rightside(Node* root){

    if(!root) return;
    if(!root->left && !root->right) return;
    
    if(root->right){
      root = root->right;
    }
    else{
        if(root->left) root = root->left;
    }
    cout<<root->data<<" ";
}

void leafside(Node* root){
    if(!root) return;

    if(!root->left && !root->right){
        cout<<root->data<<" ";
        return;
    }

    leafside(root->left);
    leafside(root->right);
}

void boundary_traversal(Node* root){

    leftside(root);
    rightside(root);
    leafside(root);
} 

Node* buildtree(){

    int data;
    cout<<"Enter the data: ";
    cin>>data;

    if(data==-1) return NULL;
    Node* root = new Node(data);

    root->left = buildtree();
    root->right = buildtree();

    return root;
}

int main(){

    Node* root = NULL;
    root  = buildtree();

    // level_order_traversal(root);

    boundary_traversal(root);

    return 0;

}