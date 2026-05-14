#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;

    // storing the data
    Node(int d){
        data = d;
        next = NULL;
    }
};

// print
void print(Node* N) {
    Node *mover = N;
    while(mover != NULL) {
        cout << mover->data << ' ';
        mover = mover->next;
    }
}
int main() {
    int size; cin >> size;
    Node *head;
    Node *ptr;

    // input
    for(int i = 1; i <= size; ++i) {
        int x; cin >> x;
        Node *tmp = new Node(x);
        if(i == 1) {
            head = tmp;
            ptr = tmp;
        }
        else{
            ptr->next = tmp;
            ptr = tmp;
        }
    }
    print(head);
    cout << endl;
}