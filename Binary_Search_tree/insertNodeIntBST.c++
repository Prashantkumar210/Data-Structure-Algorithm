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


TreeNode* BulidTree(TreeNode* root, int data){

    if(!root){
        root  = new TreeNode(data);
        return root;
    }

    if(root->data>data){
        root->left = BulidTree(root->left, data);
    }
    else{
        root->right = BulidTree(root->right, data);
    }

    return root;
}
void Levelorder(TreeNode* root){
    
    if(!root) return;
    
    queue<TreeNode*>q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        
        TreeNode* temp = q.front();
        q.pop();
        
        if(!temp){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
    return;
}

void takeInput(TreeNode* &root){

    int data;
    cin>>data;

    while(data!=-1){
        root = BulidTree(root, data);
        cin>>data;
    }
}  


int main(){

    TreeNode* root = NULL;
    
    cout<<"Enter the data : ";
    takeInput(root);

    cout<<endl;
    cout<<"Print leveloreder : "<<endl;
    Levelorder(root);

    return 0;
}