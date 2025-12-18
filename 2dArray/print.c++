#include<iostream> 
#include<vector>
using namespace std;

int main(){

    vector<vector<int>>arr{
                   {1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9},
                   {10, 11, 12}};

    
    for(int row=0; row<arr.size(); row++){
        for(int col=0; col<arr[0].size(); col++){

            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    
    for(int i=0; i<arr[0].size(); i++){

        for(int j=0; j<arr.size(); j++){

            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}