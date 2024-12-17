#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s; // by default private
public:
    void read();
    void check();
    void ones_complement();
    void show();
};

void binary::read()
{
    cout << "enter a binary number" << endl;
    cin >> s;
}
void binary::check()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "not a binary number" << endl;
            exit(0);
        }
    }
}
void binary::ones_complement()
{
    check();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
            s.at(i) = '0';
    }
}
void binary::show()
{
    cout << "your entered binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.read();
    b.check();
    b.show();
    b.ones_complement();
    b.show();
    return 0;
}