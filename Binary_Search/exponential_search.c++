#include<iostream>
#include<vector>

using namespace std;

void Binary_search(int s, int e, vector<int>&arr, int &target){

    int mid = s+(e-s)/2;

    while(s<=e){
        if(target == arr[mid]){
            cout<<"The index value of target is "<< mid<<endl;
            break;
        }
        else if(arr[mid]<target){
            s = mid +1;
        }
        else{
            e = mid-1;
        }

        mid = s +(e-s)/2;
    }
    return;
}

int main(){

    vector<int>arr{10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160,170,180,190};
    int target = 20;

    // Exponential_search
    int n = arr.size();
    int i = 1;
    if(arr[0]==target) cout<<"The index value of target is " << "0"<<endl;

    while(i<n && arr[i]<=target){
        i = i*2;
    }

    // Apply Binary Search
    Binary_search(i/2, min(n-1, i), arr, target);
    return 0;
}