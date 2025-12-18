#include<iostream>
using namespace std;


class Animal{
    public:
    int weight;
    int age;
};

class Dog :private Animal{
    public:
    void print(){
        cout<<this->weight<<endl; 
    }

};  

int main(){

    Dog obj;
    obj.print();

    // Can not access this  
    // cout<<obj.weight<<endl;
    return 0;   
}