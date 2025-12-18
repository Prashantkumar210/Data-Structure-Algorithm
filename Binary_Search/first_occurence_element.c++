#include<iostream>
#include<vector>

using namespace std;

void first_occurence(vector<int>arr, int key){

    int st = 0;
    int en = arr.size()-1;
    int mid = st + (en-st)/2;

    int index;
    while(st<=en){

        if(arr[mid]==key){
            en = mid -1;
            index = mid;
        }
        else if(arr[mid]<key){
            st = mid +1;
        }
        else{
            en = mid -1;
        }
        mid = st + (en-st)/2;
    }

    cout<<"Index value = "<<index<<endl;
}

int main(){

    vector<int>arr{2,8,8,9,9,16,20,20,25,30,34,90,100,111};

    int key = 20;
    first_occurence(arr, key);


    return 0;
}