#include<iostream>
using namespace std;

class Animal{

    public:
    int age;
    int weight;
    string name;

    Animal(Animal obj2){

        cout<<"Constructor called"<<endl;
    }
   
};

int main(){

    // Static memory allocation
    Animal obj;
    Animal obj2 = obj;
    Animal obj3(obj2);

    // Dynamiccally memory allocation
    // Animal* obj2 = new Animal;
   
    return 0;
}