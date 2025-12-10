#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x){ data = x; next = NULL; }
};

Node* deleteNode(Node* head, int key){
    if (!head) return head;

    if (head->data == key)
        return head->next;

    Node* curr = head;
    while (curr->next && curr->next->data != key)
        curr = curr->next;

    if (curr->next)
        curr->next = curr->next->next;

    return head;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    head = deleteNode(head, 2);

    while(head){
        cout << head->data << " ";
        head = head->next;
    }
}
