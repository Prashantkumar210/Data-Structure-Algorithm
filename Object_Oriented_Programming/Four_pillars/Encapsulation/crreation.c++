#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;
    string name;

    Animal(){
        cout<<"Printing the Animal class"<<endl;
    }
};

class Dog:public Animal{

};

int main(){

    Dog* obj = new Dog;
    return 0;
}