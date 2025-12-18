#include<iostream>
#include<queue>
using namespace std;

void print(queue<int>q){

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}

int main(){

    queue<int>q;

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

    queue<int>temp;

    int n = q.size()/2;
    cout<<n<<endl;

    while(n>0){
        temp.push(q.front());
        q.pop();
        --n;
    }   

    cout<<endl;
    queue<int>ans;

    while(!q.empty() && !temp.empty()){

        ans.push(temp.front());
        temp.pop();

        ans.push(q.front());
        q.pop();
    }

    ans.push(q.front());
    q.pop();


    print(ans);
    return 0;
}