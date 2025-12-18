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

Node* insertIntoBST(Node* root, int data){

    if(!root){
        root = new Node(data);
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

void level_order_traversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();  
       
        if(!temp){
            cout<<endl;
            if(!q.empty()) q.push(NULL);
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }

    }
    return;
}


void takeinput(Node* &root){
    int data;
    cin>>data;
    
    while(data!=-1){
        root = insertIntoBST(root, data);
        cin>>data;
    }
}

int main(){

    Node* root = NULL;
    cout<<"Enter the data for Node"<<endl;
    takeinput(root);

    cout<<"Print the tree "<<endl;
    level_order_traversal(root);
    return 0;
}