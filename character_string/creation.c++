#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;
int main(){

    char arr[100];
    cin>>arr;

    cout<<"Array = "<<arr<<endl;
    int a = arr[8]-'0';
    int b = arr[99]-'0';

    cout<<arr[8]<<endl;
    cout<<arr[99]<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}