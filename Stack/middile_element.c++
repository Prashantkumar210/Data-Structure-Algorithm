#include<iostream>
#include<Stack>
#include<string>
using namespace std;

int main(){

    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(50);


    int len = st.size();
    

    int middile = -1;

    while(!st.empty()){
        if(st.size()-1==len/2){
            middile = st.top();
            break;
        }
        st.pop();
    }

    cout<<"Middile elememnt is = "<<middile<<endl;
}