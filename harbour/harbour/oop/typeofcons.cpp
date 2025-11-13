// default and parameterized constructor

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int);

    void show()

    {
        cout << a << " + " << b << "i" << endl;
    }
};
complex ::complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    complex d(1, 2); // implicit call
    d.show();
    complex e = complex(6, 7); // explicit call
    e.show();

    return 0;
}