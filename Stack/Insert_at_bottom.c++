#include<iostream>
#include<stack>

using namespace std;

void insert(int target, stack<int>&st){

    if(st.empty()){
        st.push(target);
        return;
    }

    int top = st.top();
    st.pop();

    insert(target, st);
    st.push(top);
}

void insertAtBottom(stack<int>&st){

    int target = st.top();
    st.pop();

    insert(target, st);
}

void printstack(stack<int>&st){

    if(st.empty()) return;

    cout<<st.top()<<" ";
    st.pop();
    printstack(st);
}

int main(){

    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    
    insertAtBottom(st);
    printstack(st);

    
    return 0;
}