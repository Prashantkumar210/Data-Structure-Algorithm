#include<iostream>
#include<vector>
using namespace std;

int find(vector<int>&arr, int s, int e, int key){

    if(s>e) return -1;

    int mid = s + (e-s)/2;

    if(arr[mid]==key) return mid;
    
    if(arr[mid]>key) find(arr, s, mid-1, key);
    else find(arr, mid+1, e, key);
}

int main(){

    vector<int>arr{10,20,30,40,50,60,70,80,90,100};

    int ans =  find(arr, 0, arr.size()-1, 10);

    cout<<"Index of value is "<<ans<<endl;
    return 0;
}