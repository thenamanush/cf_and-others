#include<bits/stdc++.h>
using namespace std;
int main() {
    //int n; cin >> n;
    // int ar[5];

    // for(int ghor = 0; ghor < 5; ghor++) {
    //     cin >> ar[ghor];
    //     // ar[0] = 2
    //     // ar[1] = 4
    // }
    // int j = 0;
    // for(int i = 1; i <= 5; i++) {
    //     cin >> ar[j];
    //     j++;
    // }

    // for(int i = 0; i < 5; i++) // 5 ta
    // for(int i = 1; i <= 5; i++) // 5 ta
    // for(int i = 10; i < 15; i++) // 5 ta 

    // cout << ar[4] << ' ';
    // cout << ar[3] << ' ';
    // cout << ar[5] << ' '; // out of bound

    // int n; cin >> n;
    // int ar[3], i = 0;
    // while(n > 0) {
    //     int digit = n % 10;
    //     // ar[i] = digit;
    //     i++;
    //     cout << digit << ' ';
    //     n = n / 10;
    // }
    // for(int i = 2; i >= 0; i--) cout << ar[i] << ' ';

    // int arr[3][2];
    // for(int tala = 0; tala < 3; tala++) {
    //     for(int room = 0; room < 2; room++) { 
    //         cin >> arr[tala][room];
    //     }
    // }

    // for(int row = 0; row < 3; row++) { 
    //     for(int col = 0; col < 2; col++) {
    //         cout << arr[row][col] << ' ';
    //     }
    //     cout << endl;
    // }

    // for(int row = 1; row <= 3; row++) {
    //     for(int star = 5; star > 0; star--) {
    //         cout << '*';
    //     }
    //     cout << endl;
    // }


    for(int i = 0; i < 5; i++) {
        for(int j = i + 1; j <= 5; j++) {
            cout << '*';
    }
    cout << endl;
    }
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << '*';
        }
        cout << endl;
    }
}
// 0 -> 0
// 1 -> 0, 1

// 0 -> j = 1, 2, 3, 4, 5
// 1 -> j = 2, 3, 4, 5
// 2 -> j = 3, 4, 5


// 0 -> 0, 1
// 1 -> 0, 1
// 2 -> 0, 1

// 786 - 6
/*
    786 % 10 - 6
    786 / 10 - 78
    78 % 10 - 8
    78 / 10 - 7
    7 % 10 - 7
    7 / 10 - 0
*/

// 1992

// *****
//  ***
//   *