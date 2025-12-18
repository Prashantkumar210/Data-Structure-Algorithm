#include<iostream>
using namespace std;

void present(string str, char ch, int i, int &incre){

    if(i == str.size()) return;

    if(str[i] == ch) ++incre;

    present(str, ch, i+1, incre);
}

int main(){

    string str = "Prashant_Kumar";
    char ch = 'a';

    int incre = 0;
    present(str, ch, 0, incre);

    cout<<"occurence = "<<incre<<endl;
    return 0;
}