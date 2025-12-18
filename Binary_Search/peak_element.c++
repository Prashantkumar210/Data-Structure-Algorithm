#include<iostream>
#include<vector>

using namespace std;

void peak_element(vector<int>arr){

    int st = 0;
    int en = arr.size()-1;

    int mid = st + (en-st)/2;

    int peak_element;

    while(st<=en){
        
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            peak_element = arr[mid];
            cout<<"Peak Element = "<<peak_element<<endl;
            break;
        }
        else if(arr[mid]>arr[mid-1]){
            st = mid + 1;
        }
        else{
            en = mid;
        }

        mid = st +(en-st)/2;
    }
}

int main(){

    vector<int>arr{10,20,30,40,60,70,80,90,100,300,200,50,40,30,20,10};

    peak_element(arr);

    return 0;
}
