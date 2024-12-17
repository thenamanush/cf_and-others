#include <bits/stdc++.h>
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
#define rrep(i, n) for (int i = (n)-1; i >= 0; i--)
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define RFOR(i, a, b) for (int i = (a); i >= (b); i--)
#define trav(a, x) for (auto &a : x)
#define F first
#define S second
#define sz(x) (int)(x).size()
#define vi vector<int>
#define pi pair<int, int>
#define even(n) if (n % 2 == 0)
#define odd(n) if (n % 2 == 1)

#define alliswell                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void merge(vi &arr, int low, int mid, int high) {
    vi temp; // Temporary array for merging
    int left = low;   // Pointer for the left half
    int right = mid + 1; // Pointer for the right half

    // Merging the two halves
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.pb(arr[left++]);
        } else {
            temp.pb(arr[right++]);
        }
    }

    // Copy remaining elements of the left half, if any
    while (left <= mid) {
        temp.pb(arr[left++]);
    }

    // Copy remaining elements of the right half, if any
    while (right <= high) {
        temp.pb(arr[right++]);
    }

    // Copy the merged elements back into the original array
    for (int i = 0; i < temp.size(); i++) {
        arr[low + i] = temp[i];
    }
}

void merge_Sort(vi &arr, int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        merge_Sort(arr, low, mid);       // Sort the first half
        merge_Sort(arr, mid + 1, high);  // Sort the second half
        merge(arr, low, mid, high);      // Merge the sorted halves
    }
}

int main() {
    alliswell

    int n;
    cin >> n;
    vi a(n);
    rep(i, n) {
        cin >> a[i];
    }
    
    merge_Sort(a, 0, n - 1);

    // Print sorted array
    print(a);

    return 0;
}