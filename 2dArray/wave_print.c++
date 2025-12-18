#include<iostream>
#include<vector>

using namespace std;

int main(){


    vector<vector<int>>arr{{10,20,30,40},
                           {50,60,70,80},
                           {90,100,110,120},
                           {130,140,150,160}};



    for(int i=0; i<arr.size(); i++){
        
        if(i%2==0){
            for(int j=0; j<arr[i].size(); j++){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int j=arr[i].size()-1; j>=0; j--){
                cout<<arr[j][i]<<" ";
            }
        }
    }                       
    return 0;
}