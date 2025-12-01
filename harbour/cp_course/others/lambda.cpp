#include<bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    auto get_sum = [](int a, int b) -> int {
        return a + b;
    };
    cout << get_sum(15, 2) << endl;
}