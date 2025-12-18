#include<iostream>
#include<vector>

using namespace std;
int main(){

    vector<int>arr;
    int si;
    si = sizeof(arr)/sizeof(int); 
    cout<<si<<endl;

    si = sizeof(arr)/sizeof(char); 
    cout<<si<<endl;

    si = sizeof(arr)/sizeof(bool); 
    cout<<si<<endl;


    return 0;
}