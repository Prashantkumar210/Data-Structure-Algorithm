#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>arr, int n){

    if(n == arr.size()) return;

    cout<<arr[n]<<" ";
    print(arr, n+1);
}

int main(){

    vector<int>arr{10,20,30,40,50,60,70};

    print(arr, 0);
    return 0;
}