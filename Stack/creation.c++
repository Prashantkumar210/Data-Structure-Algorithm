#include<iostream>
using namespace std;

class Stack{
    private:
    int *arr;
    int top;
    int size;

    public:
    Stack(int size){

        arr = new int[size];
        this->size = size;
        top = -1;
    }

    // function 

    void push(int data){

        if(size-top>1){
            ++top;
            arr[top] = data;
        }
        else{
            cout<<"Sorry !, Space is not available";
        }
    }

    void pop(){
        
        if(top==-1){
            cout<<"Sorry !,Stack is empty";
        }
        else{
            --top;
        }
    }

    int getTop(){
        if(top==-1){
            cout<<"Sorry!, Stack is empty"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }

    int getSize(){
        return top+1;
    }

    bool isEmpty(){
        if(top>=0){
            cout<<"No!, Stack is not empty"<<endl;
            return false;
        }
        else{
            cout<<"Yes!, Stack is empty"<<endl;
            return true;
        }
    }
};

int main(){

    Stack st(10);
    st.push(10);
    st.push(20);
    st.push(30);

    cout<<st.getTop()<<endl;

    st.push(40);
    st.push(50);
    st.push(60);
    cout<<st.getTop()<<endl;
    cout<<st.isEmpty()<<endl;
    return 0;
}