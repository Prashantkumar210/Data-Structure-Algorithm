#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    
};

void insertionAtTail(Node* &head, int data){
    
    Node* newNode = new Node(data);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next!=NULL){
        temp = temp->next;
    }

    temp->next = newNode;
}



void print(Node* &head){

    Node* temp = head;

    while(temp!=NULL){
        cout<<temp<<"->"<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){

    Node* head = NULL;

    insertionAtTail(head, 10);
    insertionAtTail(head, 20);
    insertionAtTail(head, 30);
    insertionAtTail(head, 40);
    insertionAtTail(head, 50);
    insertionAtTail(head, 60);


    print(head);
    cout<<endl;

    return 0;
}