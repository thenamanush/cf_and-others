#include <bits/stdc++.h>
using namespace std;

struct Product
{
    int id;
    string details;
    float price;
};

void update(Product p[3])
{
    int target;
    cin >> target;
    for (int i = 0; i < 3; i++)
    {
        if (target == p[i].id)
        {
            string details;
            cin >> details;
            p[i].details = details;
        }
    }
}

// int sum(Product p[3]) {
//     int item; cin >> item;
//     int tot = 0;
//     for(int i = 0; i < item; ++i) {
//         int id; cin >> id;
//         tot +=
//     }
//     return tot;
// }

int32_t main()
{
    Product p[3];
    p[0].id = 1;
    p[0].details = "apple, fresh and natural";
    p[0].price = 20.35;

    // print
    cout << p[0].details << endl;

    for (int i = 0; i < 3; ++i)
    {
        cin >> p[i].id;
        cin >> p[i].details >> p[i].price;
    }
    for (int i = 0; i < 3; ++i)
    {
        cout << p[i].id << ' ' << p[i].details << ' ' << p[i].price << endl;
    }

    // override
    cout << p[0].details << endl;

    update(p);

    for (int i = 0; i < 3; ++i)
    {
        cout << p[i].id << ' ' << p[i].details << ' ' << p[i].price << endl;
    }
    update(p);

    // int total = sum(p);
    // cout << total << endl;
}
