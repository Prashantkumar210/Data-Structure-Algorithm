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
    return 0;
}

