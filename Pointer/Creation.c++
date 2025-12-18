#include<iostream>
using namespace std;

int main(){

    int a = 10;
    char b = 'a';
    double c = 12;

    int *p = &a;
    char *ch = &b;
    double *dtr = &c;

    cout<<sizeof(p)<<endl;
    cout<<sizeof(ch)<<endl;
    cout<<sizeof(dtr)<<endl;

}