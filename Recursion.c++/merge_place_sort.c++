#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int>&arr, int s, int e){

    int len = e - s + 1;

    // Gap method
    int gap = len/2 + len%2;

    int i = s;
    int j = s + gap;

    while(gap>0){
        if(gap == 1) gap = 0;
        
        i = s;
        j = s + gap;  
       while(i<len && j<len){
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
                ++i;
                ++j;
            }else{
                ++i;
                ++j;
            }
       }

       gap = gap/2 + gap%2;
    }
}

void merge_sort(vector<int>&arr, int s, int e){

    if(s>=e) return;

    int mid = (s + e)/2;

    // Divide left part
    merge_sort(arr, s, mid);

    // Divide right part
    merge_sort(arr, mid+1, e);

    // Now to merge left + right

    merge(arr, s, e);
}

int main(){

    vector<int>arr{38,27,43,3,9,20,2,2,2,2,2};

    int s = 0;
    int e = arr.size()-1;

    merge_sort(arr, s, e);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}