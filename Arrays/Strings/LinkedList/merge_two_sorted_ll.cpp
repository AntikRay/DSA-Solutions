#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x){ data = x; next = NULL; }
};

Node* mergeLL(Node* a, Node* b){
    if(!a) return b;
    if(!b) return a;

    if(a->data < b->data){
        a->next = mergeLL(a->next, b);
        return a;
    } else {
        b->next = mergeLL(a, b->next);
        return b;
    }
}

int main(){
    Node* a = new Node(1);
    a->next = new Node(3);
    a->next->next = new Node(5);

    Node* b = new Node(2);
    b->next = new Node(4);

    Node* ans = mergeLL(a, b);

    while(ans){
        cout << ans->data << " ";
        ans = ans->next;
    }
}
