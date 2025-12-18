#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int>&arr, int i){

    if(i+1 == arr.size()) return true;

    if(arr[i]>arr[i+1]) return false;

    check(arr, ++i);
}

int main(){

    vector<int>arr{10,11,12,13,14,15};

    bool ans = check(arr, 0);

    cout<<"Answer is "<<ans<<endl;
    return 0;
}
