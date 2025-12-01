#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    string s; cin >> s;
    x = abs(x), y = abs(y);

    if(n < x or n < y) {
        cout << "NO" << endl;
    }
    else{
        int x_move = 0, y_move = 0;
        for(char c : s){
            if(c == '4'){
                x_move++;
            }
            else{
                x_move++;
                y_move++;
            }
        }
        if(x <= x_move and y <= (x_move - x + y_move)) {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}