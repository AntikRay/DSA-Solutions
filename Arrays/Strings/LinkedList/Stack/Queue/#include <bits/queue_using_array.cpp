#include <bits/stdc++.h>
using namespace std;

#define MAX 5
int arr[MAX];
int front = 0, rear = -1;

void enqueue(int x) {
    if (rear == MAX - 1) {
        cout << "Overflow\n";
        return;
    }
    arr[++rear] = x;
}

void dequeue() {
    if (front > rear) {
        cout << "Underflow\n";
        return;
    }
    front++;
}

void display() {
    for (int i = front; i <= rear; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
}
