#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int a, b;

public:
    friend void distance(point p1, point p2);
    point(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "(" << a << ", " << b << ")" << endl;
    }
};

void distance(point p1, point p2)
{
    float d;
    d = sqrt(pow(p1.a - p2.a, 2) + pow(p1.b - p2.b, 2));
    cout << "Distance between the two points is " << d << endl;
}
using namespace std;
int main()
{
    point p(2, 4);
    p.display();
    point q = point(4, 3);
    q.display();

    distance(p, q);

    return 0;
}