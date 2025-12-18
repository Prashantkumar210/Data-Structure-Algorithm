#include<iostream>
#include<vector>


using namespace std;
int main(){

    vector<vector<int>>arr;

    vector<int>arr1{10,20,30,40};
    vector<int>arr2{50,60,70,90};
    vector<int>arr3{9,11,12,4};
    vector<int>arr4{5,60,0,0};
    vector<int>arr5{2,100,1,5};

    arr.push_back(arr1);
    arr.push_back(arr2);
    arr.push_back(arr3);
    arr.push_back(arr4);
    arr.push_back(arr5);


    // Row wise print
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    // col wise print 

    int col = arr[0].size();
    int row = arr.size();

     for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }


    return 0;
 }