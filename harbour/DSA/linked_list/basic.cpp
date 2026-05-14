#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node * next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};

int main() {
    int n; cin >> n;
    Node * head = nullptr;
    Node * nxt = nullptr;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        Node * temp = new Node(x);
        if(i == 0) {
            head = temp;
            nxt = temp;
        }
        else{
            nxt -> next = temp;
            nxt = temp;
        }
    }
    while(head != nullptr) {
        cout << head-> data << ' ';
        head = head -> next;
    }
}