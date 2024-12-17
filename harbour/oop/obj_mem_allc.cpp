#include <iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<stack>
#include<queue>
#include<unordered_map>
#include<unordered_set>
#include<cmath>
#include<limits.h>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int count;

public:
    void ccount()
    {
        count = 0;
    }
    void setPrice();
    void showPrice();
};

void shop::setPrice()
{
    cout << "enter id of the product" << endl;
    cin >> itemId[count];
    cout << "enter price of the product" << endl;
    cin >> itemPrice[count];
    count++;
}

void shop::showPrice()
{
    for (int i = 0; i < count; i++)
    {
        cout << "the product code is " << itemId[i] << "and price is " << itemPrice[i] << endl;
    }
}
int main()
{
    shop grocery;
    grocery.ccount();
    grocery.setPrice();
    grocery.setPrice();
    grocery.setPrice();
    grocery.showPrice();
    return 0;
}