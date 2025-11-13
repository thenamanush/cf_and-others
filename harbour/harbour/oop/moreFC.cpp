#include <iostream>
using namespace std;

class y;

class x
{
    int num;

public:
    void set(int value)
    {
        num = value;
    }

    void show()
    {
        cout << num << endl;
    }
    friend void change(x &, y &);
};

class y
{
    int val;

public:
    void set(int value)
    {
        val = value;
    }

    void show()
    {
        cout << val << endl;
    }
    friend void change(x &, y &);
};

void change(x &a, y &b)
{
    int tmp = a.num;
    a.num = b.val;
    b.val = tmp;
}
int main()
{

    x oc;
    y od;
    oc.set(5);
    od.set(10);

    change(oc, od);
    oc.show();
    od.show();
    return 0;
}

/*#include<iostream>
using namespace std;

class y;
class x{
    int num;
    public:
    void set(int value)
    {
        num=value;
    }
    friend void add(x, y);
};
class y{
    int num;
    public:
    void set(int value)
    {
        num=value;
    }
    friend void add(x, y);
};

void add(x obj1, y obj2)
{
    cout<< "the sum is " << obj1.num+obj2.num<<endl;
}
int main() {
    x a;
    a.set(5);

    y b;
    b.set(10);

    add(a,b);
    return 0;
}*/
