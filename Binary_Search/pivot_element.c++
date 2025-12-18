#include<iostream>
#include<vector>
using namespace std;

int find(vector<int>nums){

    int s = 0;
    int e = nums.size()-1;
    
    int mid = s + (e-s)/2;

    while(s<=e){
        if(s==e){
            return s; 
        }
        else if(mid-1>0 && nums[mid-1]>nums[mid]){
            return mid-1;
        }
        else if(mid +1 && nums[mid]>nums[mid+1]){
            return mid;
        }
        else if(nums[mid]<nums[s]){
            e = mid -1;
        }
        else{
            s = mid + 1;
        }

        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){

    vector<int>nums{5,10,15,20,30,40,41,42,43,44,45,46,50,52,53,58,60,61,62,63,64,65,66,67,68,69,70};

    int ans = find(nums);

    cout<<"Index value = "<<ans<<" And value of element = "<<nums[ans]<<endl;

    return 0;
}