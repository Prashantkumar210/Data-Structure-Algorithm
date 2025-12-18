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

    if(!root){
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

int minVal(TreeNode* root) {
	TreeNode* temp = root;
	if(temp == NULL) {
		return -1;
	}

	while(temp -> left != NULL) {
		temp = temp ->left;
	}
	return temp -> data;
}

int maxVal(TreeNode* root) {
	TreeNode* temp = root;
	if(temp == NULL) {
		return -1;
	}

	while(temp -> right != NULL) {
		temp = temp ->right;
	}
	return temp -> data;
}

TreeNode* deleteNodeInBST(TreeNode* root, int target) {
	
	//base cae
	if(root == NULL ) {
		return NULL;
	}
    
	if(root->data == target) {
		//isi ko delete krna h 
		//4 cases 
		if(root->left == NULL && root->right == NULL) {
			//leaf node
			//delete root;
			return NULL;
		}
		else if(root->left == NULL && root->right != NULL) {
			TreeNode* child = root->right;
			//delete root;
			return child;
		}
		else if(root->left != NULL && root->right == NULL) {
			TreeNode* child  = root->left;
			//delete root;
			return child;
		}
		else {
			//both child
			//find inorder predecessor inb left subtree
			int inorderPre = maxVal(root->left);
			//replace root->data value with inorder predecessor
			root->data = inorderPre;
			//delete inorder predecessor from left subtree
			root->left = deleteNodeInBST(root->left,inorderPre);
			return root;
			
		}
		
	}
	else if(target > root -> data) {
		//right jana chahiye
		root->right =  deleteNodeInBST(root->right, target);
	}
	else if(target < root->data) {
		//left jana chahioye
		root->left = deleteNodeInBST(root->left, target);
	}
	return root;
}

void takeinput(TreeNode* &root){
    int data;
    cin>>data;
    
    while(data!=-1){
        root = insertIntoBST(root, data);
        cin>>data;
    }
}


int main(){

    TreeNode* root = NULL;
    cout<<"Enter the data for Node -> ";
    takeinput(root);

    cout<<"Print the tree "<<endl;
    level_order_traversal(root);

    cout<<"Find the minimum value in tree ->";
    int mini = minVal(root);
    cout<<mini<<endl;

    cout<<"Find the maximum value in tree ->";
    int maxi = maxVal(root);
    cout<<maxi<<endl;


    int val;
    cout<<"Enter the data which you want to delete -> ";
    cin>>val;

    deleteNodeInBST(root, val);

    cout<<endl;
    cout<<"After deleting the Node, the Tree -> ";
    cout<<"Print the tree "<<endl;
    level_order_traversal(root);
    
    return 0;
}