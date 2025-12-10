#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top: " << st.top() << endl;

    st.pop();
    cout << "Top after pop: " << st.top() << endl;

    cout << "Size: " << st.size() << endl;
}
