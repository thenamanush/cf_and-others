#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 7;
int a[N];

// sum of all pairs like a1 + a1 + a1 + a2 + a1 + a3...

int main() {
    int n; cin >> n;

    int sum = 0;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i] * (2 * n);
    }
    cout << sum << endl;
}
