#include<iostream>
using namespace std;

class Animal{

    public:
    int age;
    string name;
    int weight;

    // Default constructor 
    Animal(){
        cout<<"Constructor called";
    }

};

int main(){

    Animal* obj = new Animal;
    return 0;
}