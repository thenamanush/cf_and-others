#include <iostream>
using namespace std;

class bankdeposit
{
    int year;
    int principal;
    float rate;
    float return_value;

public:
    bankdeposit() {}
    bankdeposit(int y, int p, float r)
    {
        year = y;
        principal = p;
        rate = r;
        return_value = principal;
        for (int i = 0; i < y; i++)
        {
            return_value = return_value * (1 + rate);
        }
    }

    bankdeposit(int y, int p, int R)
    {
        year = y;
        principal = p;
        rate = (float)R / 100;
        return_value = principal;
        for (int i = 0; i < y; i++)
        {
            return_value = return_value * (1 + rate);
        }
    }

    void show()
    {
        cout << "principal value was " << principal
             << "and return value after "
             << year << " year is "
             << return_value << endl;
    }
};
int main()
{
    int y, p, R;
    float r;
    cout << "enter value of y, p and r" << endl;
    cin >> y >> p >> r;
    cout << "enter value of y, p and R" << endl;
    cin >> y >> p >> R;
    bankdeposit b(y, p, r);
    b.show();

    bankdeposit c(y, p, R);
    c.show();

    return 0;
}