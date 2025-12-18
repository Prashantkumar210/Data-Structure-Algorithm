#include<iostream>
#include<vector>

using namespace std;
int main(){

    vector<int>arr{1,2,3,4,5,10,6,7,8,9,10};

    int i = 0;
    int duplicate;

    while(i<arr.size()){

        if(arr[abs(arr[i])]<0){
            duplicate = abs(arr[i]);
            break;
        }
        else{
            arr[abs(arr[i])] = -arr[abs(arr[i])];
            i++;
        }
    }

    cout<<duplicate<<" ";

    return 0;
}