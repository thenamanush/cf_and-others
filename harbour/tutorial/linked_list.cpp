// #include<bits/stdc++.h>
// using namespace std;

// int sum(int a, int b) {
//     int total = a + b;
//     return total;
// }

// void print(string name) {
//     cout << "hello "<< name << endl;
//     cout << "welcome to leading university" <<endl;
// }


// int main() {
    
//     for(int i = 0; i < 5; ++i) {
//         string n; cin >> n;
//         print(n);
//     }
// }

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next; 
};

Node *createNode(int d, Node * nxt) {
    Node *newNode = new Node;
    if(newNode == NULL) {
        cout << "overflow" << endl;
        exit(1);
    }
    newNode->data = d;
    newNode->next = nxt;

    return newNode;
}

void print(Node *S) {
    while(S != NULL) {
        cout << S-> data << ' ';
        S = S->next;
    }
}
Node *insert(int d, Node *head) {
    Node *newNode = new Node;
    if(newNode == NULL) {
        cout << "overflow" << endl;
        exit(1);
    }
    newNode-> data = d;
    newNode-> next = head;
    
    return newNode;
}

int main() {
    Node *n1, *n2, *n3;
    int x, y, z; cin >> x >> y >> z;
    
    n1 = createNode(x, NULL);
    n2 = createNode(y, NULL);
    n3 = createNode(z, NULL);
    
    n1->next = n2;
    n2->next = n3;

    Node *head = n1;
    head = insert(1, head);
    print(head);
}