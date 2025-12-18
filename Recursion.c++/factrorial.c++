#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0) return 1;

    return n*factorial(n-1);
}

int main()
{

    cout << "Enter the element ";
    int n;
    cin >> n;
    int ans = factorial(n);
    cout<<"The Ans is : "<<ans<<endl;
    return 0;
}