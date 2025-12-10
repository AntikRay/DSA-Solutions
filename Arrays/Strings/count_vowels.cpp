#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "hello world";
    int count = 0;

    for (char c : s) {
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            count++;
    }

    cout << "Vowels: " << count;
}
