#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Animal{
    
    public:
    // State of behavior
    int age;
    string name = "Baster";

    // Function or properties or methods 
    void eat(){
        cout<<"Eating the food"<<endl;
    }

    void sleep(){
        cout<<"Sleeping the dog";
    }

    void run(){
        cout<<"running the dog";
    }
};


int main(){

    cout<<"Size of empty class is = "<<sizeof(Animal)<<endl;

    // object creation 

    // static memory allocation
    Animal Dog;
    cout<<"Age of Dog is = "<<Dog.age<<endl;
    cout<<"Name of Dog is = "<<Dog.name<<endl;

    // Call the function
    Dog.eat();

    // Dynamic memory allocation
    
    return 0;
}