#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {5, 3, 8, 1, 2};

    for (int i = 0; i < arr.size(); i++) {
        int minIndex = i;

        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        swap(arr[i], arr[minIndex]);
    }

    for (int x : arr) cout << x << " ";
}
