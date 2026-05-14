#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *createNode(int data) {
    Node *newNode = new Node;

    if(newNode == NULL) {
        cout << "Memory error" << endl;
        exit(1);
    }

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp->data << ' ';
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node *head = NULL;
    Node *n1, *n2, *n3;

    n1 = createNode(10);
    n2 = createNode(20);
    n3 = createNode(30);

    n1->next = n2;
    n2->next = n3;

    head = n1;

    print(head);

    return 0;
}