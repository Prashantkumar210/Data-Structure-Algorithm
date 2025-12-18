#include<iostream>
#include<vector>

using namespace std;

class Queue{
    public:

    int *arr;
    int rear;
    int front;
    int size;

    Queue(int size){
        this->size = size;
        arr = new int[size];

        rear = -1;
        front = -1;
    }

    // insert element 
    void push(int data){    
        
        // single element 
        // Todo : Add one condition more
        if(rear-1 == size && front==0){
            cout<<"Queue is full"<<endl;
            return;
        }
        if(rear == -1){
            front = rear = 0;
            arr[front] = data;
        }
        else if(rear==size-1 && front!=0){
            rear = 0;
            arr[rear] = data;
        }
        else{
            rear++;
            arr[rear] = data;
        }
        return;
    }

    void pop(){
        if(front == -1){
            cout<<"Queue is Empty"<<endl;
        }
        // single element
        else if(rear == front){
            rear = -1;
            front = -1;
            return;
        }
        else if(front == size-1){
            front = 0;
        }
        else{
            front++;
        }
    }

    int getfront(){
        if(rear == front) return -1;

        return arr[front];
    }

    int getsize(){
        return rear-front;
    }

    bool empty(){

        if(rear==front) return true;
        return false;
    }
};
int main(){    

    Queue q(10);

    q.push(1);
    q.push(2);
    q.push(3); 
    q.push(4);
    q.push(5);
    q.push(6); 
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);
    q.push(11);

    cout<<"The size of Queue is = "<<q.getsize()<<endl;
    cout<<"The first element of Queue is = "<<q.getfront()<<endl;

    
    q.pop();

    cout<<"The first element of Queue is = "<<q.getfront()<<endl;
    return 0;   
}