#include<iostream>
using namespace std;

class A{
    public:
    string name;

    int sum(int a, int b){
        cout<<"First function"<<endl;
        return a+b;
    }

    int sum(int a, int b, int c){
        cout<<"Second function"<<endl;
        return a+b+c;
    }

    int sum(float a, int b){
        cout<<"Third function"<<endl;
        return a+b;
    }
};

int main(){

    // Dynamically Memory Allocation  
    A* Obj = new A;


    cout<<(*Obj).sum(10,20)<<endl;
    cout<<(*Obj).sum(10,20,60)<<endl;
    cout<<(*Obj).sum(19.99f,20)<<endl;

    return 0;
}