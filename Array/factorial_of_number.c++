#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void factorial(vector<int>&ans, int num){

    int carry = 0;

    for(int i=2; i<=num; i++){

        for(int j=0; j<ans.size(); j++){

            int val = ans[j] * i + carry; 
            int digit = val % 10;

            ans[j] = digit;
            carry = val/10; 
        }
        while(carry){
            ans.push_back(carry%10);
            carry = carry/10;
        }
    }


}

int main(){

    int num;
    cout<<"Enter the number : ";
    cin>>num;

    vector<int>ans;
    ans.push_back(1);

    factorial(ans, num);

    reverse(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i];
    }
    return 0;
}