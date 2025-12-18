#include<iostream>
using namespace std;

void print(int copy){
    if(copy == 0) return;

    int n = copy%10;
   
    print(copy/10);

    cout<<n<<" ";
}

int main(){

    int number = 10045545;
    int copy = number;

    print(copy);
    return 0;
}