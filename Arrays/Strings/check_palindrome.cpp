#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "madam";
    string rev = s;
    reverse(rev.begin(), rev.end());

    if (s == rev) cout << "Palindrome";
    else cout << "Not Palindrome";
}
