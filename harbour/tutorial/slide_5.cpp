#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int ar[n];

    for(int i = 0; i < n; ++i) {
        cin >> ar[i];
    }

    // lo, hi, mid
    int key; cin >> key;
    int lo = 0, hi = n - 1;
    while(lo <= hi) {
        int mid = (lo + hi) / 2;
        if(ar[mid] == key) {
            cout << "found at index " << mid << endl;
            break;
        }
        else if(ar[mid] < key) {
            // ufre dorkar nai
            lo = mid + 1;
            // cout << "bhitre aise" << endl;
        }
        else{
            // ar[mid] > key
            hi = mid - 1;
        }
    }
    cout << "hello world" << endl;
}