#include <iostream>
using namespace std;
class Number
{
    int a;

public:
    Number() {}
    Number(int num)
    {
        a = num;
    }
    Number(Number &obj)
    {
        a = obj.a;
    }
    void Display();
};

void Number ::Display()
{
    cout << "the number is " << a << endl;
}
int main()
{
    Number x(5), y, z;
    x.Display();
    Number n1(x); // copy constructor
    n1.Display(); // compiler will supply a default copy constructor for this program
}