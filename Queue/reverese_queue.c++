#include<iostream>
#include<stack>
#include<queue>

using namespace std;

void usingrecursion(queue<int>&q){

    if(q.empty()){
        return;
    }

    int element = q.front();
    q.pop();

    usingrecursion(q);

    q.push(element);
}

void  rever(queue<int>&q){

    stack<int>st;

    while(!q.empty()){

        int element = q.front();
        q.pop();
        st.push(element);
    }

    while(!st.empty()){
        int element = st.top();
        st.pop();
        q.push(element);
    }
    return;
}

void print(queue<int>q){
    while(!q.empty()){
        cout<<q.front()<<" ";    
        q.pop();
    }
}

int main(){

    queue<int>q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);

    int s = 0;
    int e = q.size()-1;

    print(q);
    rever(q);

    cout<<endl;
    print(q);

    cout<<endl;
    usingrecursion(q);
    print(q);

    return 0;
}
 