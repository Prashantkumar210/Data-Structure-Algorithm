#include<iostream>
#include<stack>

using namespace std;

void insertAtBottom(stack<int>&st, int target){

    if(st.empty()){
        st.push(target);
        return;
    }

    int top = st.top();
    st.pop();

    insertAtBottom(st, target);
    st.push(top);
}


void Reversestack(stack<int>&st){

    if(st.empty()) return;

    int target = st.top();
    st.pop();

    Reversestack(st);

    insertAtBottom(st, target);
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
    st.push(70);

    
    Reversestack(st);
    printstack(st);
    
    return 0;   
}