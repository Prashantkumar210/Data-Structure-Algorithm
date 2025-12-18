#include<iostream>
#include<vector>
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

TreeNode* Convert_In_BST(vector<int>&arr, int s, int e){

    if(s>e) return NULL;
    int mid = (s + e)/2;

    int ele = arr[mid];

    TreeNode* root = new TreeNode(ele);
    
    root->left = Convert_In_BST(arr, s, mid-1);
    root->right = Convert_In_BST(arr, mid+1, e);

    return root;
}

void level_order_traversal(TreeNode* root){
    queue<TreeNode*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        TreeNode* temp = q.front();
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

int main(){

    vector<int>arr{10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110};
    TreeNode* root = NULL;

    root = Convert_In_BST(arr, 0, arr.size()-1);

    cout<<"Print levelOrder -> "<<endl;
    level_order_traversal(root);
    return 0;
}