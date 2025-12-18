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

        rear = 0;
        front = 0;
    }

    // insert element 
    void push(int data){    

        if(rear == size){
            cout<<"Queue is full"<<endl;
            return;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    void pop(){

        if(rear == front){
            cout<<"Sorry! Queue is underflow"<<endl;
            return;  
        }
        else{
            front++;
            if(front == rear) rear = front = 0;
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