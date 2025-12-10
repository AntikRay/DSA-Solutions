#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> v = {"flower", "flow", "flight"};
    string ans = v[0];

    for (int i = 1; i < v.size(); i++) {
        string temp = "";
        for (int j = 0; j < min(ans.size(), v[i].size()); j++) {
            if (ans[j] == v[i][j]) temp += ans[j];
            else break;
        }
        ans = temp;
    }

    cout << ans;
}
