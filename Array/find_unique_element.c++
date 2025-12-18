#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>arr{1,2,3,4,5,7,9,2,1,3,7,9,4};

    int unique = arr[0] ;

    for(int i=1; i<arr.size(); i++){

        unique = arr[i]^unique;
    }

    cout<<unique<<endl;
    return 0;
}