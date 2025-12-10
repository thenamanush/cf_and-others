#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 7;
int a[N];

int main() {
    int n; cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        sum += a[i] * i + (n - i + 1);
    }
    cout << sum << endl;
}