#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pie 2 * (acos(0.0))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define nl '\n'
#define lcm(a, b) (a * b) / (gcd<ll>(a, b))
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
    ll n, k;
    cin >> n >> k;
    if (n == 2)
    {
        if(k & 1){
            no;
            return;
        }
        else{
            yes;
            if(k == 2){
                cout << "UU\n";
                cout << "RL\n";
                return;
            }
            else{
                cout << "UU\n";
                cout << "LL\n";
                return;
            }
        }
    }
    else
    {
        yes;
        vector<vector<char>> ans(n, vector<char>(n));

        int top = 0, bottom = n - 1;
        int left = 0, right = n - 1;

        while(top <= bottom and left <= right)
        {
            // rew left -> right
            for(int i = left; i <= right; i++)
            {
                if (k > 0)
                {
                    ans[top][i] = 'U';
                    k--;
                }
                else
                    ans[top][i] = 'D';
            }
            top++;
            // column top -> bottom
            for(int i = top; i <= bottom; i++){
                if(k > 0)
                {
                    ans[i][right] = 'R';
                    k--;
                }
                else
                    ans[i][right] = 'L';
            }
            right--;
            // row right -> left
            for(int i = right; i >= left; i--){
                if(k > 0)
                {
                    ans[bottom][i] = 'D';
                    k--;
                }
                else
                    ans[bottom][i] = 'U';
            }
            bottom--;
            // column bottom -> top 
            for(int i = bottom; i >= top; i--){
                if(k > 0)
                {
                    ans[i][left] = 'L';
                    k--;
                }
                else
                    ans[i][left] = 'R';
            }
            left++;
        }

        for(auto &row : ans)
        {
            for(auto &ch : row)
            {
                cout << ch;
            }
            cout << nl;
        }
    }
}

int main()
{
    alliswell

        int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}