#include<iostream>
#include<vector>


using namespace std;
int main(){

    vector<int>nums{1,0,2,1,2,0,0,2,1,1,1};

    for(int i=0; i<nums.size(); i++){

        cout<<nums[i]<<" ";
    }

    int low = 0;
    int mid = 0;
    int high = nums.size();

    while(mid<high){

        if(nums[low]==0){
            low++;
        }
        else if(nums[high]==2){
            high--;
        }
        else if(nums[mid==1]){
            mid++;
        }
        else if(nums[low]==1 && nums[mid]==0){
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]==)
    }
    return 0;
}