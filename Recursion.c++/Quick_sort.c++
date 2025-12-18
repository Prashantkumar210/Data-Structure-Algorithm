#include<iostream> 
#include<vector>

using namespace std;

int partition(vector<int>&nums, int s, int e){

    int pivotindex = s;
    int pivotElement = nums[s];

    int count = 0;

    for(int i=s+1; i<=e; i++){
        if(nums[i]<=pivotElement){
            ++count;
        }
    }

    int rightindex = s + count;
    swap(nums[pivotindex], nums[rightindex]);

    pivotindex = rightindex;

    int i = s;
    int j = e;

    while(i<pivotindex && j>pivotindex){

        if(nums[i]<=nums[pivotindex]){
            i++;
        }
        else if(nums[j]>=nums[pivotindex]){
            j--;
        }
        else{
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }

    return pivotindex;
}

void Sorting(vector<int>&nums, int s, int e){

    if(s>=e) return;
     
    int pivot = partition(nums, s, e);

    Sorting(nums, s, pivot-1);
    Sorting(nums, pivot+1, e);

}

int main(){

    vector<int>nums{1,2,1,1,1,2,9,-1,-100,10,10,8,3,4,1,20,50,30};

    int s = 0;
    int e = nums.size()-1; 

    Sorting(nums, 0, e);

    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;
} 