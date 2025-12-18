#include<iostream>
#include<Stack>
#include<string>
using namespace std;

void printstring(string &s){
    
    for(int i=0; i<s.length(); i++){
        cout<<s[i];
    }
    cout<<endl;
}


int main(){

    string s = "Prashant";
    stack<char>st;

    for(int i=0; i<s.length(); i++){
        
        st.push(s[i]);
    }

    printstring(s);

    int i = 0;
    while(!st.empty()){
        s[i] = st.top();
        st.pop();
        i++;
    }

    printstring(s);

    return 0;
}