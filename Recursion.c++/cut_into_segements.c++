#include <iostream>
#include <vector>
#include<limits.h>
using namespace std;

int find(vector<int>& segments, int rod,
          vector<vector<int>>& store, vector<int>& temp) {

    if (rod == 0) {
        store.push_back(temp);
        return 0;
    }

    if (rod < 0) return INT_MIN;
    int maxi = INT_MIN;
    for (int i = 0; i < segments.size(); i++) {
        temp.push_back(segments[i]);
        int ans = find(segments, rod - segments[i], store, temp); // allow reuse
        if(ans!=INT_MIN) maxi = max(maxi, ans+1);
        temp.pop_back(); // backtracking
    }
    return maxi;
}

int main() {

    vector<int> segments{2, 3, 5};
    int rod = 7;

    vector<vector<int>> store;
    vector<int> temp;

    int ans = find(segments, rod, store, temp);

    cout<<"The Maximum segements : "<<ans<<endl;
    for (auto& comb : store) {
        for (int val : comb) {
            cout << val << " ";
        }
        cout << endl;
    }
    

    return 0;
}
