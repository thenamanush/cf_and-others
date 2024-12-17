//lemonade change

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
#define vi vector<int>
#define pi pair<int, int>
#define even(n) if (n % 2 == 0)
#define odd(n) if (n % 2 == 1)
#define sp << " " <<

#define alliswell                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

bool greedy(int n, int a[])
{
    int five = 0, ten = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 5)
        {
            five++;
        }
        else if(a[i] == 10)
        {
            if(five)
            {
                five--;
                ten++;
            }
            else{
                return false;
            }
        }
        else{
            if(five && ten)
            {
                five--;
                ten--;
            }
            else if(five >= 3)
            {
                five -= 3;
            }
            else{
                return false;
            }
        }
    }
    return true;
}

int main()
{
    alliswell

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if(greedy(n, arr))
    {
        yes;
    }
    else{
        no;
    }

    return 0;
}

/*
Input:
5
5 5 5 10 20

Output:
YES

Input:
5
5 5 10 10 20

Output:
NO
*/