#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define MOD 1000000007
#define pie 2 * (acos(0.0))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define nl '\n'
#define lcm(a, b) (a * b) / (__gcd<ll>(a, b))
#define print(v)          \
    for (auto e : v)      \
        cout << e << " "; \
    cout << endl;
#define printp(v)    \
    for (auto e : v) \
        cout << e.first << " " << e.second << endl;
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rrep(i, n) for (int i = (n) - 1; i >= 0; i--)
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define RFOR(i, a, b) for (int i = (a); i >= (b); i--)
#define trav(a, x) for (auto &a : x)
#define F first
#define S second
#define setbit(x) __builtin_popcount(x)
#define sz(x) (int)(x).size()
#define vi vector<long long>
#define pi pair<int, int>
#define even(n) if (n % 2 == 0)
#define odd(n) if (n % 2 == 1)
#define sp << " " <<

#define alliswell                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    
    vi a(n), b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    srt(a);
    srt(b);

    set<ll> st, stt;
    ll cnt1 = 0, cnt2 = 0;
    rep(i, n)
    {
        if(a[i] <= k && st.find(a[i]) == st.end())
        {
            cnt1++;
            st.insert(a[i]);
        }
    }
    rep(i, m)
    {
        if(b[i] <= k && stt.find(b[i]) == stt.end())
        {
            cnt2++;
            stt.insert(b[i]);
        }
    }
    
    ll key = k / 2;
    if(cnt2 < key || cnt1 < key)
    {
        no;
        return;
    }
    set<ll> res;
    
    for(auto & it : st)
    {
        res.insert(it);
    }
    for(auto & it : stt)
    {
        res.insert(it);
    }
    if(res.size() < k)
    {
        no;
        return;
    }
    yes;
}

int main()
{
    alliswell

    int t; cin >> t;
    while(t--) solve();

    return 0;
}