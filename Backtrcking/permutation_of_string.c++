#include<iostream>
#include<vector>

using namespace std;

void permutation(string &str, int i, vector<string>&ans){

    if(i == str.length()){
        ans.push_back(str);
        return;
    }

    for(int j=i; j<str.length(); j++){

        swap(str[i], str[j]); 

        cout<<"1."<<str<<" ";
        cout<<"1."<<i<<j<<" ";

        permutation(str, i+1, ans);
        cout<<"2."<<str<<" ";
        cout<<"2."<<i<<j<<" ";
        
        cout<<endl;
    }
}

int main(){

    string str = "abc";  

    int i = 0;
    
    vector<string>ans;

    permutation(str, i, ans);


    // for(int i=0; i<str.length(); i++){

    //     cout<<str<<" ";
    // }
    return 0;
}
