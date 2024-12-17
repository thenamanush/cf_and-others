#include <iostream>
using namespace std;
class base
{
protected:
    int a;

private:
    int b;
};

/*for a protected member

                          public derivation    private derivation     protected derivation
1.private member            not inherited         not inherited          not inherited
2.protected member            protected              private               protected
3.public member                public                private               protected
*/
class derived : protected base
{
};
int main()
{
    base b;
    derived d;

    return 0;
}