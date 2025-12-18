#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int find(vector<int>&arr, int n, vector<int>&store){

    if(n == 0) return 0;

    for(int i=0; i<arr.size(); i++){

        if(n>=arr[i]){

            store[i] = find(arr, n-arr[i], store) + 1;
        }
    }
}

int main(){

    vector<int>arr{2,3,5};

    int len = arr.size();

    vector<int>store{len, 0};

    int n = 10;

    int ans = find(arr, n, store);

    return 0;
}