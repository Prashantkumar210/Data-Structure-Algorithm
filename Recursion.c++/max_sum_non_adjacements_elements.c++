#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void find(vector<int>&arr, int &ans, int sum , int i){

    if(i>=arr.size()){
        ans = max(ans, sum);
        return;
    }
    // Include
    find(arr, ans, sum+arr[i], i+2);
    // exclude
    find(arr, ans, sum, i+1);
}

int main(){

    vector<int>arr{1,10,21,16,2,13};

    int ans = INT_MIN;
    int sum = 0;

    find(arr, ans, sum , 0);

    cout<<"Answer is : "<<ans<<endl;
    return 0;
}