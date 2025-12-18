#include<iostream>
using namespace std;

class Node{
    public:

        int data;
        Node* prev;
        Node* next;

        Node(){
            this->data = 0;
            this->prev = NULL;
            this->next = NULL;
        }    

        Node(int data){
            this->data = data;
            this->prev = NULL;
            this->next = NULL;
        }    
};

void  insertionAtHead(Node* &head, int data){

    Node* newNode = new Node(data);

    if(head == NULL){
        head = newNode;    
    }
    

    newNode->next = head;
    head->prev = newNode;

    head = newNode;
}

int getLenth(Node* &head){
     
    Node* temp = head;

    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }

    return count;
}

void insertAtTail(Node* &head, int data){

    Node* newNode = new Node(data);

    if(head==NULL){
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next!=NULL){
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;

}

void insertAtMid(Node* &head, int data, int position){

    cout<<"Insert value at postion of "<<position<<" "<<endl;
    Node* newNode = new Node(data);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    int count = 1;

    while(temp!=NULL){

        if(position==count)
    }
}

void print(Node* &head){
    
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}



int main(){

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
  

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    Node* head = first;

    int len = getLenth(head);
    cout<<"The length of linked list is = "<<len<<" "<<endl;

    print(head);
    cout<<endl;
    
    insertionAtHead(head, 1);
    insertionAtHead(head, 2);
    insertionAtHead(head, 3);

    print(head);
    cout<<endl;

    insertAtTail(head, 50);
    insertAtTail(head, 55);
    insertAtTail(head, 60);

    print(head);
    cout<<endl;
    
    insertAtMid(head, 90, 2);

    return 0;
}