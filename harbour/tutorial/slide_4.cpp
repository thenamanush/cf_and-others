#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;

    int ar[n];
    for(int i = 0; i < n; ++i) {
        cin >> ar[i]; // input
        // cout << ar[i] << ' '; // output / traverse
    }   
    cout << endl;

    // for(int i = n; i > 0; i--) {
    //     cout << ar[i - 1] << ' '; // reverse
    // }
    // cout << endl;

    // update
    int pos, val;
    // cin >> pos >> val;

    // for(int i = 0; i < n; i++) {
    //     if(i == pos) { // selection
    //         ar[i] = val;
    //     }
    //     cout << ar[i] << ' ';
    // }
    // cout << endl;

    // linear search
    // cin >> val; // override
    // bool signal = 0;
    // for(int i = 1; i < n; ++i) {
    //     if(ar[i] == val) {
    //         cout << "index " << i << " serial " << i + 1 << endl;
    //         signal = 1;
    //     }
    // }
    // if(signal == true) {
    //     cout << "found " << endl;
    // }
    // else{
    //     cout << "not" << endl;
    // }

    //insertion
    // cin >> pos >> val;
    // int nw[n + 1];
    // for(int i = 0; i <= n; i++) {
    //     if(i < pos) {
    //         nw[i] = ar[i];
    //     }
    //     else if(i == pos) {
    //         nw[i] = val;
    //         nw[i + 1] = ar[i];
    //     }
    //     else{
    //         nw[i + 1] = ar[i];
    //     }
    // }
    // for(int i = 0; i <= n; ++i) {
    //     cout << nw[i] << ' ';
    // }
    // cout << endl;
    // 4 100 5 6 2 3 1

    for(int iter = 0; iter < n; iter++) {
        for(int j = 0; j < n - iter - 1; j++) {
            if(ar[j] > ar[j + 1]) {
                swap(ar[j], ar[j+1]);
            }
        }
    }
    for(int i = 0; i < n; ++i) {
        cout << ar[i] << ' ';
    }
}