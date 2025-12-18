#include<iostream>
#include<vector>
using namespace std;

void Sort(vector<int>&arr){

    int st = 0;
    int en = arr.size()-1;

    while(st<=en){
        if(arr[st]==0){
            st++;
        }
        else if(arr[en]==1){
            en--;
        }
        else{
            swap(arr[st], arr[en]);
            st++;
            en--;
        }
    }

     for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

int main(){

    vector<int>arr{0,1,0,0,1,1,1,0,0,0};

    Sort(arr);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}