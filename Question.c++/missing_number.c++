#include<iostream>
#include<vector>

using namespace std;
int main(){

    vector<int>nums{1,2,3,4,5,6,6};

    int repeat = 1;

    for(int i=2; i<=nums.size(); i++){
        repeat ^= i;
    }

    cout<<repeat<<endl;

    for(int i=1; i<nums.size(); i++){
        repeat ^= nums[i];
    }



    cout<<repeat<<endl;

    return 0;
}