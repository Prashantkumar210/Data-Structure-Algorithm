// #include<iostream>
// #include<vector>
// using namespace std;

// void sequence(string str, int i, string st, vector<string>&ans){

//     if(i >= str.length()){
//         ans.push_back(st);
//         return;
//     }
    
//     // Exclude
//     sequence(str, i+1, st, ans);

//     // Include
//     st.push_back(str[i]);
//     sequence(str, i+1, st, ans);
// }

// int main(){

//     string str = "abc";
//     string st = "";

//     cout<<"Answer is = ";

//     vector<string>ans;
//     sequence(str, 0, st,ans);

//     for(int i=0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

void find(string str, int i, vector<string>&ans, string temp){

    if(i>=str.length()){
        ans.push_back(temp);
        return;
    }

    // exclude 
    find(str, i+1, ans, temp);

    // include
    temp.push_back(str[i]);
    find(str, i+1, ans, temp);
}

int main(){

    string str = "abc";
    vector<string>ans;
    string temp;
    find(str, 0, ans, temp);

    for(auto it:ans){
        cout<<it<<" ";   
    }
    return 0;
}