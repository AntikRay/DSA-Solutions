#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> price = {7,1,5,3,6,4};

    int minPrice = INT_MAX;
    int profit = 0;

    for (int p : price) {
        minPrice = min(minPrice, p);
        profit = max(profit, p - minPrice);
    }

    cout << profit;
}
