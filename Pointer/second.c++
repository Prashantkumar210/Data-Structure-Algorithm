#include<iostream> 
using namespace std;

void change(int* p){

    p = p+1;
}

int main(){

    int a = 10;

    int* p = &a;

    cout<<"Before"<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;

    change(p);

    cout<<"After"<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    
    return 0;
}