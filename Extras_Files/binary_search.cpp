#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 4, 6, 8, 10};
    int target = 6;

    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            cout << "Found at index " << mid;
            return 0;
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Not found";
}
