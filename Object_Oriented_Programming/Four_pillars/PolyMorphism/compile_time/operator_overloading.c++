#include<iostream>
using namespace std;

class A{
    public:
    int val;

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

    A obj1, obj2;

    obj1.val = 10;
    obj2.val = 40;

    //  This should print the difference between them

    return 0;
}