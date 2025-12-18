#include<iostream>
#include<limits.h>
#include<vector>

using namespace std;

int merge_sort(vector<int>&arr, int s, int end){

    int maxleftsum = INT_MIN;
    int maxrightsum = INT_MIN;


    int mid = s +  ((end-s)>>1);

    if(s == end){
        return arr[s];
    }
    
    int leftsum =  merge_sort(arr, s, mid);

    int rightsum = merge_sort(arr, mid+1, end);

    int leftborsum = 0;
    int rightborsum = 0;

    
    // Both border sum
    // left
    for(int i=mid; i>=s; i--){

        leftborsum += arr[i];

        if(maxleftsum<leftborsum) maxleftsum = leftborsum;
    }

    // right
    for(int i=mid+1; i<=end; i++){

        rightborsum += arr[i];

        if(maxrightsum<rightborsum) maxrightsum = rightborsum;
    }

    // cross border
    int bothborsum = maxleftsum + maxrightsum;

    return max(bothborsum, max(leftsum, rightsum));
}

int main(){


    vector<int>arr{99,100,-1000,2,100,5,-19,50};

    int sum = merge_sort(arr, 0, arr.size()-1);

    cout<<"The Answer is = "<<sum<<endl;

    return 0;   
}