#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;

int main(){

    vector<int>arr{2,4,7,11,15,16,8,6,1,2};
    stack<int>st;
    st.push(-1);

    vector<int>ans;


    for(int i=arr.size()-1; i>=0; i--){

        if(st.top()<arr[i]){
            ans.push_back(st.top());
            st.push(arr[i]);
        }
        else{

            while(st.top()>arr[i]){
                st.pop();
            }
            ans.push_back(st.top());
            st.push(arr[i]);
        }
    }

    reverse(ans.begin(), ans.end());

    for(int i=0; i<ans.size(); i++){

        cout<<ans[i]<<" ";
    }
    return 0;

}