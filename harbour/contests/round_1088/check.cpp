#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define all(v) v.begin(),v.end()

void Lidless_Eye()
{ 
    ll n, k; cin >> n >> k;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < n; i++) cin >> b[i];
    for (ll i = 0; i < n - k; i++)
        if (b[i] != -1 and a[i] != b[i]) return void (cout << "NO\n");
    for (ll i = n - 1; i >= k; i--)
        if (b[i] != -1 and a[i] != b[i]) return void (cout << "NO\n");
    set<ll> st;
    for (ll i = n - k; i < k; i++)
    st.insert(a[i]);
    ll cnt = 0;
    for (ll i = n - k; i < k; i++)
    {
        if (b[i] == -1) cnt++;
        else if (st.count(b[i])) st.erase(b[i]);
    }
    if (cnt == (ll)st.size()) cout << "YES\n";
    else cout << "NO\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  cout.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)  Lidless_Eye();           
    
    return 0;
}