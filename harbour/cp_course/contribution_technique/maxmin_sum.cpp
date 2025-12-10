#include<bits/stdc++.h>
using namespace std;

//sum of maximum - minimum of all subarray

const int N = 1e6+7;
int a[N];

int main() {
    int n; cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; ++i) cin >> a[i];

    sort(a + 1, a + n + 1);

    for(int i = 1; i <= n; ++i) {
        for(int j = i + 1; j <= n; ++j) {
            sum += (a[j] - a[i]) * (1 << (j - i - 1));
        }
    }
    cout << sum << endl;
}