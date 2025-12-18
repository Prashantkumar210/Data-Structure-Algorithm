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
    void push_front(int data){    
        // full
        if(front==-1){
            cout<<"Sorry! we can not insert the element "<<endl;
            return;
        }
        // Normal
        else{
            --front;
            arr[front] = data;
        }
    }

    void push_back(int data){
        // full
        if(rear == size-1){
            cout<<"Sorry DeQueue is full"<<endl;
            return;
        }
        // for single 
        else if(rear==-1){
            front = rear = 0;
        }
        // for normal
        else{
            rear++;
        }

        arr[rear] = data;
    }

    void pop_front(){
        // full
        if(front == -1){
            cout<<"Queue is Empty"<<endl;
        }
        // single element
        else if(rear == front){
            rear = -1;
            front = -1;
            return;
        }
        else{
            front++;
        }
    }

    void pop_back(){
        // Full
        if(rear == -1){
            cout<<"Sorry!, Dequeue is full"<<endl;
            return;
        }
        // for single  
        else if(rear==front){
            front = rear = -1;
        }
        else{
            rear--;
        }
    }

    int getfront(){
        if(rear == front) return -1;

        return arr[front];
    }

    int getrear(){
        if(rear==-1) return -1;
        
        return arr[rear];
    }


    int getsize(){
        return rear-front+1;
    }

    bool empty(){

        if(rear==front) return true;
        return false;
    }
};
int main(){    

    Queue q(10);

    q.push_back(1);
    q.push_back(2);
    q.push_back(3); 
    q.push_back(4);
    q.push_back(5);
    q.push_back(6); 
    q.push_back(7);
    q.push_back(8);
   
    cout<<"The size of Queue is = "<<q.getsize()<<endl;
    cout<<"The front element of Queue is = "<<q.getfront()<<endl;
    cout<<"The last element of Queue is = "<<q.getrear()<<endl;
    cout<<endl;
    
    q.pop_back();
    q.pop_front();

    cout<<"The size of Queue is = "<<q.getsize()<<endl;
    cout<<"The front element of Queue is = "<<q.getfront()<<endl;
    cout<<"The last element of Queue is = "<<q.getrear()<<endl;


    // cout<<"The first element of Queue is = "<<q.getfront()<<endl;
    return 0;   
}