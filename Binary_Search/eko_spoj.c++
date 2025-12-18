#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool is_possible(vector<int>height, int meter, int wood){

    int sum = 0;

    for(int i=0; i<height.size(); i++){

        if(height[i]>meter){
            sum += height[i]-meter;
        }
    }

    if(sum>=wood) return true;

    return false;
}   


int main(){

    vector<int>height{4,42,40,26,46};
    int need_wood = 20;
    
    int scall = 0;

    int start = 0;
    int end = height[0];

    for(int i=1; i<height.size(); i++){
        if(height[i]>end){
            end = height[i];
        }
    }

    int ans = 1;

    while(start<=end){

        int mid = start + (end-start)/2;

        if(is_possible(height, mid, need_wood)){
            
            ans = mid ;
            start = mid +1;
        }
        else{
            end = mid -1;
        }

    }   

    cout<<"The Max Scall length = "<<ans<<endl;

    return 0;
}