#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {2, 7, 11, 15};
    int target = 9;
    
    for (int i = 0; i < a.size(); i++) {
        for (int j = i + 1; j < a.size(); j++) {
            if (a[i] + a[j] == target) {
                cout << i << " " << j;
            }
        }
    }
}
