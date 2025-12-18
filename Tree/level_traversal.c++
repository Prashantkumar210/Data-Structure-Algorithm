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

void level_order_traversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        Node* temp = q.front();
        q.pop();
       
        if(!temp){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
        }


        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
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

    level_order_traversal(root);

    return 0;

}