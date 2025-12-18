#include<iostream>
using namespace std;
int main(){

    int row;
    cout<<"Entee the row name : ";
    cin>>row;

    int col;
    cout<<"Enter the col : ";
    cin>>col;

    int **arr = new int*[row];

    
    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }

    cout<<"Enter the Array"<<endl;

    for(int i=0; i<row; i++){

        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}