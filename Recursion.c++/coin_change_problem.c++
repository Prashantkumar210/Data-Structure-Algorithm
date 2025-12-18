#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void find(int coins, int ste, int &step){

    if(coins<0) return;

    if(coins == 0){

        if(step>ste){
            step = ste;
        }
    }


    find(coins-1, ste+1, step);
    find(coins-2, ste+1, step);
    find(coins-3, ste+1, step);

}

int main(){

    int coins = 10;
    int ste = 0;

    int step = 100;
    find(coins, ste, step);

    cout<<"Total steps = "<<step<<endl;
    return 0;
}