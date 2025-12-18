#include<iostream>
#include<vector>

using namespace std;

void find(vector<int>&nums, vector<vector<int>>&ans, int index){

    if(index>=nums.size()){

        ans.push_back(nums);
        return;
    }


    for(int i=index; i<nums.size(); i++){

        swap(nums[i], nums[index]);

        find(nums, ans, index+1);

        swap(nums[i], nums[index]);
    }
}

int main(){

    vector<int>nums{1,1,2};

    int index = 0;

    vector<vector<int>>ans;

    find(nums,ans, index);

    for(int i=0; i<ans.size(); i++){

        for(int j=0; j<ans[0].size(); j++){

            cout<<ans[i][j]<<" ";
        }
        cout<<endl; 
    }
    return 0;
}