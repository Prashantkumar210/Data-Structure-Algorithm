#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int>&arr, int s, int e, int &count){

    int mid = (s + e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int*left = new int[len1];
    int*right = new int[len2];

    int k = s;
    for(int i=0; i<len1; i++){
        left[i] = arr[k];
        ++k;
    }

    k = mid + 1;
    for(int i=0; i<len2; i++){
        right[i] = arr[k];
        ++k;
    }

    // merge Logic 

    int leftIndex = 0;
    int rightIndex = 0;

    int mainIndexArray = s;

    while(leftIndex<len1 && rightIndex<len2){

        if(left[leftIndex]<=right[rightIndex]){
            arr[mainIndexArray++] = left[leftIndex++]; 
           
        }
        else{
            arr[mainIndexArray++] = right[rightIndex++];
            count += len1-leftIndex; 
        }
    }

    while(leftIndex<len1){
        arr[mainIndexArray++] = left[leftIndex++];
    }
    
    while(rightIndex<len2){
        arr[mainIndexArray++] = right[rightIndex++];
    }

    // Todo: Delete left and right Array 
}

void merge_sort(vector<int>&arr, int s, int e, int &count){

    if(s>=e) return;

    int mid = (s + e)/2;

    // Divide left part
    merge_sort(arr, s, mid, count);

    // Divide right part
    merge_sort(arr, mid+1, e, count);

    // Now to merge left + right

    merge(arr, s, e, count);
}

int main(){

    vector<int>arr{11,1,7,9,3};

    int s = 0;
    int e = arr.size()-1;


    int count = 0;

    merge_sort(arr, s, e, count);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    cout<<"Count inversion = "<<count<<endl;
    return 0;
}