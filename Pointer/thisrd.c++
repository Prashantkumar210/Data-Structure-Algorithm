#include<iostream>
using namespace std;

int main(){

    float a = 10.4;
    float p = 20.5;

    float* ptr = &a;
    (*ptr)++;
    *ptr = p;

    cout<<*ptr<<" "<<a<<" "<<p<<" ";
    return 0;
}