#include<iostream>
#include<queue>
#include<map>
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

Node* bulidTree(){
    int data;
    cout<<"Enter the data = ";
    cin>>data;

    if(data==-1) return NULL;

    Node* root = new Node(data);
    root->left = bulidTree();
    root->right = bulidTree();

    return root;
}

void levele_traversal(Node* root){

    if(!root) return;
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
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
}

void Bottomview(Node* root){

    if(!root) return;
    map<int, int>mp;

    queue<pair<Node*, int>>q;
    q.push(make_pair(root, 0));

    while(!q.empty()){

        pair<Node*, int>temp = q.front();
        q.pop();
        Node* frontNode = temp.first;
        int hd = temp.second;
        
        // Check that this is already in map or not
      
        mp[hd] = frontNode->data;
    
        if(frontNode->left){
            q.push(make_pair(frontNode->left, hd-1));
        }
        if(frontNode->right){
            q.push(make_pair(frontNode->right, hd+1));
        }
    }

    cout<<"printing the map store data = "<<endl;
    for(auto i:mp){
        cout<<i.first <<"->"<<i.second<<endl;
    }
}

int main(){
    
    Node* root = NULL;
    root = bulidTree();

    cout<<"Print the tree"<<endl;

    levele_traversal(root);

    Bottomview(root);
    return 0;   
}