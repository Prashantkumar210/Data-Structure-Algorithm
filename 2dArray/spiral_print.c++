#include<iostream>
#include<vector> 
using namespace std;
int main(){

    vector<vector<int>>arr{{10,20,30,40},
                            {60,70,80,90},
                            {100,110,120,130},
                            {140,150,160,170}};
    
    int count = 0;
    int row = arr.size();
    int col = arr[0].size();
    int total_element = row*col;

    int startingrow = 0;
    int endingrow = row-1;
    int startingcol = 0;
    int endingcol = col-1;
    
    vector<int>store;

    while(count<total_element){

        // starting row print
        for(int i=startingcol; i<=endingcol; i++){
            
            store.push_back(arr[startingrow][i]);
            count++;
        }
        startingrow++;

        // ending col print
        for(int i=startingrow; i<=endingrow; i++){
            store.push_back(arr[i][endingcol]);
            count++;
        }
        endingcol--;

        // ending row print
        for(int i=endingcol; i>=startingcol; i--){
           store.push_back(arr[endingrow][i]);
            count++;
        }
        endingrow--;

        // starting col print
        for(int i=endingrow; i>=startingrow; i--){
            store.push_back(arr[i][startingcol]);
            count++;
        }
        startingcol++;
    }

    for(int i=0; i<store.size(); i++){
        cout<<store[i]<<" ";
    }

    return 0;
}