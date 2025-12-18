#include<iostream> 

class Animal{
    private:
    int weight = 50;

    public:
    void setWeight(int w){
        weight = w;
    }   

    int getWeight(){
        return weight;
    }
};  

using namespace std;
int main(){

    Animal Dog;

    cout<<"The weight is "<<Dog.getWeight()<<endl;

    Dog.setWeight(100);

    cout<<"The weight is "<<Dog.getWeight()<<endl;
    return 0;
}