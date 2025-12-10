#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {-2, 1, -3, 4, -1, 2, 1};
    int curr = 0, best = INT_MIN;

    for (int x : a) {
        curr = max(x, curr + x);
        best = max(best, curr);
    }

    cout << best;
}
