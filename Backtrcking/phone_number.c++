#include<iostream>
#include<unordered_map>
#include<vector>


using namespace std;

void find(string &digits, vector<string>&mapping, vector<string>&ans, int it, string output){

    if(it >= digits.length()){

        ans.push_back(output);
        return;
    }

    int val = digits[it]-'0';

    string temp = mapping[val];

    for(int i=0; i<temp.length(); i++){

        char ch = temp[i];
         
      
        // include
        // output.push_back(ch);

        // Recursive call
        find(digits, mapping, ans, it+1, output+ch);

        // Backtracking
        // output.pop_back();
    }    
}

int main(){

    string digits = "235";

    vector<string>mapping(10);

    vector<string>ans;

    if(digits.length() == 0){

        cout<<"There is no answer"<<endl;
        return 0;
    }

    int it = 0;


    string output;

    mapping[2]="abc";
    mapping[3]="def";
    mapping[4]="ghi";
    mapping[5]="jkl";
    mapping[6]="mno";
    mapping[7]="pqrs"; 
    mapping[8]="tuv";
    mapping[9]="wxyz";

    find(digits, mapping, ans, it, output);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}