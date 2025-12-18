#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){

    vector<int>nums{1,2,4,5,10};

    vector<int>ans;

    for(int i=0; i<nums.size(); i++){

        for(int j=0; j<nums.size(); j++){

           if(i!=j){
                ans.push_back(nums[i]*nums[j]);
           }
        }
    }

    sort(ans.begin(), ans.end());

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}