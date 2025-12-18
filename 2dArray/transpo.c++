#include<iostream>
#include<vector>
using namespace std;

void transpose(vector<vector<int>>& arr){

    int row = arr.size();
    int col = arr[0].size();

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main(){

    vector<vector<int>>arr;

    vector<int>arr1{10,20,30,40};
    vector<int>arr2{50,60,70,90};
    vector<int>arr3{9,11,12,4};
    vector<int>arr4{5,60,0,0};
   

    arr.push_back(arr1);
    arr.push_back(arr2);
    arr.push_back(arr3);
    arr.push_back(arr4);
    


    // Row wise print
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    transpose(arr);

     for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
 }