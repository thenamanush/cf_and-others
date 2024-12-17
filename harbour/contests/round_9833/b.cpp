#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, m, r, c;
    cin >> n >> m >> r >> c;

    long long total_manush = n * m;

    // lora lagbo
    long long jagat_thakbo = ((r - 1) * m) + c;//b
    int lora_lagbo = total_manush - jagat_thakbo;

    long long ans = 0;
    //special move
    long long special = n - r;
    ans += special * m; // a

    long long baki_manush = lora_lagbo - special;
    //cout << baki_manush << endl;
    ans += baki_manush; // d

    cout << ans << endl;
}


int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}