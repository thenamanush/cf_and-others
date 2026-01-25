#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
const int N = 1e5 + 7;
int a[N];
int freq[N];

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        for(int d = 1; d * d <= a[i]; ++d) {
            if(a[i] % d == 0) {
                if(d > 1) freq[d]++;
                if(a[i] / d != d) {
                    if((a[i] / d) > 1) freq[a[i] / d]++; 
                }
            }
        }
    }
    int ans = 1;
    for(int i = 1; i < N; ++i) ans = max(ans, freq[i]);
    
    cout << ans << endl;
}