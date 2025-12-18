#include<iostream>
using namespace std;


class Animal{
    public:
    // protected:
    int a;
    string name;
    int val;

//     public:
//     Animal(int a, string name, int val){
//         this->a = 10;
//         this->name = "Prashant Kumar";
//         this->val = 100;
//    }

   void speak(){
        cout<<"This is speak";
   }

};

class Dog :public Animal{
    public:
    void speak(){
        cout<<"This is Bark";
    }
};

int main(){

    Animal a;
    a.speak();

    cout<<endl;
    
    Dog b;
    b.speak();
    return 0;
}