#include<iostream>
#include<stack>
#include<queue>

using namespace std;

void print(queue<int>q){

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
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
    q.push(90);
    
   
    int k;
    cout<<"Enter the k value = ";
    cin>>k;

    if(k <= 0 || k>q.size()) return 0;
    stack<int>st;

    print(q); 
    int n = q.size()-k;

    while(k>0){
        st.push(q.front());
        q.pop();
        k--;
    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    while(n>0){
        q.push(q.front());
        q.pop();
        n--;
    }

    print(q);   

    return 0;
}