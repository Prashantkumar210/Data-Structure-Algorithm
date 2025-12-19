#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int find(vector<int>nums, int target){
    if(target==0) return 0;
    if(target<0) return INT_MAX;

    int mini = INT_MAX;
    for(int i=0; i<nums.size(); i++){
        int ans = find(nums, target - nums[i]);
        if(ans!=INT_MAX) 
            mini = min(mini, ans + 1);
    }
    return mini;
}

int main(){

    vector<int>nums{1,2,3};
    int target = 10;

    int ans = find(nums, target);
    cout<<"The Answer is : "<<ans<<endl;
    return 0; 
}