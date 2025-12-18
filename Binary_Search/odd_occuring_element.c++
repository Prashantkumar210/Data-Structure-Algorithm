#include<iostream>
#include<vector>
using namespace std;

int find(vector<int>arr){
    int s = 0;
    int e = arr.size()-1;

    int mid = s + (e-s)/2;

    while(s<=e){
        
        if(s==e){ 
            return s;
        }

        else if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                s = mid + 2;
            }
            else{
                e = mid;
            }
            
        }
        else{
             if(arr[mid]==arr[mid-1]){
                s = mid+1 ;
            }
            else{
                e = mid-1;
            }
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){

    vector<int>arr{9,1,1,2,2,5,5,3,3,4,4,3,3,600,600,4,4};
    int ans;
    if(arr[0]!=arr[1]){
        cout<<"Ans = "<<arr[0]<<endl;
    }
    else {
        ans = find(arr);
        cout<<"Ans = "<<ans<<endl;
    }



    return 0;
}