#include <iostream>
#include <vector>
using namespace std;

void find(vector<int>& segments, int rod, int index,
          vector<vector<int>>& ans, vector<int>& temp) {

    if (rod == 0) {
        ans.push_back(temp);
        return;
    }

    if (rod < 0) return;

    for (int i = index; i < segments.size(); i++) {
        temp.push_back(segments[i]);
        find(segments, rod - segments[i], i, ans, temp); // allow reuse
        temp.pop_back(); // backtracking
    }
}

int main() {

    vector<int> segments{2, 3, 5};
    int rod = 7;

    vector<vector<int>> ans;
    vector<int> temp;

    find(segments, rod, 0, ans, temp);

    for (auto& comb : ans) {
        for (int val : comb) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
