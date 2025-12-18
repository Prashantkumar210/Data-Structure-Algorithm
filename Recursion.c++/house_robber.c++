#include<iostream>
#include<vector>

using namespace std;

int find(vector<int>&house, int i){

    if(i>=house.size()) return 0;

    // include house

    int first = house[i] + find(house, i+2);

    // Exclude house
    int second = 0 + find(house, i+1);

    return max(first, second);
}

int main(){

    vector<int>house{0,0,5,0,1,9,2,10};

    int money = find(house, 0);

    cout<<"So, the maximum collect money is = "<<money<<endl;
    return 0;
}