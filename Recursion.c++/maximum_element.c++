#include<iostream>
#include<vector>
using namespace std;

void element(vector<int>&arr, int &val, int n){

    if(n == arr.size()) return;

    if(val<arr[n]) val = arr[n];

    element(arr, val, ++n);
}

int main(){

    vector<int>arr{10,1,20,99,33,1000,-1,8,11};

    int val = arr[0];
    element(arr, val, 0);

    cout<<"Maximum of value of array is = "<<val<<endl;
    return 0;
}