#include <bits/stdc++.h>
using namespace std;

#define MAX 5
int arr[MAX];
int top = -1;

void push(int x) {
    if (top == MAX - 1) {
        cout << "Overflow\n";
        return;
    }
    arr[++top] = x;
}

void pop() {
    if (top == -1) {
        cout << "Underflow\n";
        return;
    }
    top--;
}

void display() {
    for (int i = 0; i <= top; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
}
