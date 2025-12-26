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
        permutation(str, i+1, ans);  
        swap(str[i], str[j]);       
    }
}

int main(){
 
    string str = "abc";
    int i = 0;
    vector<string>ans;
    permutation(str, i, ans);

    for(i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
    return 0;
}
