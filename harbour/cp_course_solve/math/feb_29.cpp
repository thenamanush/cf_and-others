#include<bits/stdc++.h>
using namespace std;

int count_leap_year(int x) {
    int ans = 0;
    ans = x / 4;
    ans -= x / 100;
    ans += x / 400;

    return ans;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int cs = 0;
    while(t--){
        cout << "Case " << ++cs << ": ";
        string start_month; cin >> start_month;
        int start_day; cin >> start_day;
        char comma; cin >> comma;
        int start_year; cin >> start_year;

        string end_month; cin >> end_month;
        int end_day; cin >> end_day;
        char end_comma; cin >> end_comma;
        int end_year; cin >> end_year;

        // set the range
        if(start_month != "January" and start_month != "February"){
            start_year++;
        }

        if(end_month == "Janurary" or (end_month == "February" and end_day < 29)) {
            end_year--;
        }

        cout << count_leap_year(end_year) - count_leap_year(start_year - 1) << '\n';
    }
}