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

void insertAtHead(Node* &head, int data){

    Node* newNode = new Node(data);

    if(head==NULL){
        head = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

void insertionAtMidddil(Node* &head, int data, int &position){

    if(position==0){

        insertAtHead(head, data);
        return;
    }
   
   
    Node* temp = head;

    int count = 0;

    while(temp->next!=NULL){
        temp = temp->next;
        ++count;
    }

    if(count == position){
        insertionAtTail(head, data);
        return;
    }
    cout<<count;

    count = 1;
    temp = head;
    while(count < position){
        count++;
        temp = temp->next;
    }

    Node* newNode = new Node(data);
    Node* prev = temp;
    Node* Next = temp->next; 

    prev->next = newNode;
    newNode->next = Next;
}

void print(Node* &head){

    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
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

    insertAtHead(head, 2);
    
    cout<<endl;

    print(head);
    cout<<endl;

    int position = 5;
    insertionAtMidddil(head, 90, position);
  
    print(head);

    return 0;
}