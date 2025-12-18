#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this-> data = 0;
        this-> next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int data){

    // Step : 1.
    Node* newNode = new Node(data);

    // Step : 2.
    newNode->next = head;

    // step : 3.
    head = newNode;
}

Node* reverse(Node* &prev, Node* &curr){

    // Base case
    if(curr==NULL){
        return prev;
    }
    
    // 1 Case solve karna
    Node* forward = curr->next;
    curr->next = prev;

    // recursive Call
    reverse(curr, forward);  
}

Node*  reverseKnode(Node* head, int k){
   
    if(head == NULL){
        return NULL;
    }

    int count = 0; 
    
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;

    while(count<k && curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }   
    
    if(forward != NULL){
        head->next = reverseKnode(forward, k);
    }
    return prev;
}

void printinkedList(Node* &head){
    
    Node* newNode = new Node;
    newNode = head;

    while(newNode!=NULL){
        cout<<newNode->data<<" ";
        newNode = newNode->next;
    }
}
int main(){

    Node * head = NULL;
    insertAtHead(head, 20);
    insertAtHead(head,40);
    insertAtHead(head, 50);
    insertAtHead(head, 60);
    insertAtHead(head, 80);
    insertAtHead(head, 120);

    cout<<"Print the Linked List"<<endl;

    printinkedList(head);
    cout<<endl;
    Node* prev = NULL;
    Node* curr = head;
    head = reverse(prev, curr); 

    cout<<"Print the Linked List After reversing : "<<endl;
    printinkedList(head);


    head =  reverseKnode(head, 2);
    cout << "Print the Linked List After reversing in groups of 2: " << endl;
    printinkedList(head);
    
    

    return 0;
}

