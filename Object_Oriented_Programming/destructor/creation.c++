#include<iostream>
using namespace std;

class Animal{

    public:
    int age;
    int weight;
    string name;

    Animal(){

        cout<<"Constructor called"<<endl;
    }
    ~Animal(){
        cout<<"Destructor called"<<endl;
    }
};

int main(){

    // Static memory allocation
    Animal obj;

    // Dynamiccally memory allocation
    Animal* obj2 = new Animal;
    delete obj2;
    return 0;
}