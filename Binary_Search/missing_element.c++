#include<iostream>
#include<vector>

using namespace std;

void missing_element(vector<int>nums){
    
    int st = 0;
    int en = nums.size()-1;

    int mid = st + (en-st)/2;

    int missing ;
    while(st<=en){

        if(nums[mid+1]-nums[mid]==2){
            missing = mid +2;
            break;
        }
        else if(nums[mid]==mid+1){
            st = mid +1;
        }
        else{
            en = mid -1;
        }

        mid = st + (en-st)/2;
    }

    cout<<"Missing Element = "<<missing<<endl;
}
 
int main(){

    vector<int>nums{1,2,3,4,5,6,7,8,9,10,11,12,14};

    if(nums[0] != 1){
        cout<<"Missing Element = "<< 1<<endl;
    }else{
        missing_element(nums);
    }


    return 0;
}