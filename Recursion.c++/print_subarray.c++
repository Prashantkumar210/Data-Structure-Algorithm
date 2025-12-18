#include<iostream>
#include<vector>

using namespace std;

void print_rec(vector<int>&arr, int p1, int p2){

    if(p2 == arr.size()) return;
    
    for(int i=p1; i<=p2; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl; 

    print_rec(arr, p1, p2 + 1);
   
}

void print_subarr(vector<int>&arr, int  p1, int p2){

    for(int i=p1; i<arr.size(); i++){
        print_rec(arr, i, i);
    }

    return;
}

int main(){

    vector<int>arr{10,20,30,40,50,60,70,80,90};
    int p1 = 0;
    int p2 = 0;
    print_subarr(arr, p1, p2);
    return 0;
}