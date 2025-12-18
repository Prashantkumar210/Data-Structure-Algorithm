#include<iostream>
#include<vector>
using namespace std;

int find(int target, vector<int>arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;

    while(s<=e){
        
        if(arr[mid+1]==target || arr[mid]==target || arr[mid-1]==target){
            if(arr[mid+1]==target){
                return mid+1;
            }
            else if(arr[mid]==target){
                return mid;
            }
            else{
                mid -1;
            }
            break;
        }
        else if (arr[mid]<target){
            s = mid +2;
        }
        else{
            e = mid-2;
        }

        mid = s + (e-s)/2;
    }

    return -1;
}

int main(){

    vector<int>arr{4, 1, 2, 5, 3, 6, 8, 7, 9, 12, 10, 11, 14, 13, 15, 17, 16, 18, 20, 19};
    int target = 16;


    int ans = find(target, arr);

    cout<<"The index of target value = "<<ans<<endl;

    return 0;
}