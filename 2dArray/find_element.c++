#include<iostream> 
#include<vector>
using namespace std;


pair<int, int> find(int target, vector<vector<int>>arr){

    int r = arr.size();
    int c = arr[0].size();

    int s = 0;
    int e = r*c-1;

    int mid = s + (e-s)/2;
    int ans;

    while(s<=e){

        int rindex = mid / c;
        int cindex = mid % r;
        int ele = arr[rindex][cindex];

        if(ele==target){
            return {rindex, cindex};
        }

        else if (ele<target){
            s = mid +1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }

    return {-1,-1};
}

int main(){


    vector<vector<int>>arr{
        {10,20,30,40},
        {60,70,80,90},
        {110,120,130,140},
        {150,160,170,180,190}
    };

    int target = 180;

    pair<int, int>ans = find(target,arr);

    cout<<"The target value of row index = "<<ans.first<<"\n"<<"And target value of col index = "<<ans.second<<endl;
    return 0;
}