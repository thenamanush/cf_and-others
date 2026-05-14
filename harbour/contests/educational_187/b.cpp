#include<bits/stdc++.h>
using namespace std;

int main() {
    int ar[15] = {1, 1, 1, 2, 1, 1, 3, 8, 8, 7, 9, 10, 1, 11, 19};
    int cnt = 0;
    for(int i = 0; i < 15; i++) {
        if(ar[i] == 1) {
            cnt++;
        }
    }
    //cout << cnt << endl;
    // find freq of 2
    cnt = 0;
     for(int i = 0; i < 15; i++) {
        if(ar[i] == 2) {
            cnt++;
        }
    }
    //cout << cnt << endl;
    // brute force


    // optimal
    //  int ar[15] = {1, 1, 1, 2, 1, 1, 3, 8, 8, 7, 9, 10, 1, 11, 19};
    int fr[15] = {0};
    for(int i = 0; i < 15; ++i) { // O(n)
        fr[ar[i]]++;
    }
    for(int i = 0; i < 5; ++i){ // O(n)
        int q; cin >> q;
        cout << fr[q] << endl; // O(1)
    }
}