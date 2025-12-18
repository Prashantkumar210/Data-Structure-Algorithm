#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){

    string ans;

    vector<int>num1{1,2,3,4,0,9,8,7};
    vector<int>num2{9,8,2,4,7,5,6,4,5,8,7,9,1,2,3,7,9};

    int index1 = num1.size()-1;
    int index2 = num2.size()-1;
    

    int carry = 0;

    while(index1>=0 && index2>=0){
        int a = num1[index1];
        int b = num2[index2];

        int sum = a + b + carry;
        int digit = sum % 10;
        carry = sum / 10;
        
        ans.push_back(digit +'0');

        index1--;
        index2--;
    }

    while(index1>=0){
        int a = num1[index1];
        int b = 0;

        int sum = a + 0 + carry;
        int digit = sum % 10;
        carry = sum / 10;
        
        ans.push_back(digit +'0');

        index1--;
    }

     while(index2>=0){
        int a = num2[index2];
        int b = 0;

        int sum = a + 0 + carry;
        int digit = sum % 10;
        carry = sum / 10;
        
        ans.push_back(digit +'0');

        index2--;
    }

    reverse(ans.begin(), ans.end());

    int index = ans.size()-1;
    while(ans[index]==0){
        ans.pop_back();
        index--;
    }

    cout<<"Final Answer = "<<ans<<endl;
    return 0;
}