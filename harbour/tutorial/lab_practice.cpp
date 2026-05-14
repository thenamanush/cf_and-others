#include<bits/stdc++.h>
using namespace std;


void binary_search(int a[], int n, int t) {
    int lo = 0, hi = n - 1;
    while(lo <= hi) {
        int mid = (lo + hi) / 2;
        if(a[mid] == t) {
            cout << "found at index " << mid;
            return;
        }
        if(a[mid] < t){
            lo = mid + 1;
        } 
        else{
            hi = mid - 1;
        }
    } 
}
void linear_serach(int a[], int s, int t) {
    bool found = false;
    for(int i = 0; i < s; ++i) {
        if(a[i] == t) {
            cout << "fount at index " << i << endl;
            found = true;
            break;
        }
    }
    if(!found) cout << "pawa jay nai" << endl;
}


int32_t main() {
    int n; cin >> n;
    int a[n];

    bool oise;
    for(int i = 0; i < n; ++i) cin >> a[i];
    // bubble sort
    for(int i = 0; i < n - 1; ++i) { // iteration
        oise = false; // always false dhoria nimu
        for(int j = 0; j < n - i - 1; ++j) {
            if(a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                oise = true; // swap oile true oibo
            }
        }
        // cout << oise << ' ';
        if(!oise) break; // false thakigele break oibo
    }
    int target; cin >> target;
    binary_search(a, n, target);
    cout << endl;
    for(int i = 0; i < n; ++i) cout << a[i] << ' ';
}