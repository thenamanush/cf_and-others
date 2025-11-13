#include <iostream>
using namespace std;

class student
{
protected:
    int rollno;

public:
    void getdata(int r)
    {
        rollno = r;
    }
    void display()
    {
        cout << "student's roll is " << rollno << endl;
    }
};

class test : virtual public student
{
protected:
    float maths, physics;

public:
    void setm(float x, float y)
    {
        maths = x;
        physics = y;
    }
    void showm()
    {
        cout << "your result is here " << endl
             << "maths " << maths << endl
             << "physics " << physics << endl;
    }
};

class sports : public virtual student
{
protected:
    float score;

public:
    void setsc(float sc)
    {
        score = sc;
    }
    void showsc()

    {
        cout << "your PT score is " << score << endl;
    }
};

class result : public test, public sports
{
private:
    float total;

public:
    void showall()
    {
        total = maths + physics + score;
        display();
        showm();
        showsc();
        cout << "your total is " << total << endl;
    }
};
int main()
{
    result obj;
    obj.getdata(101);
    obj.setm(99.2, 74.25);
    obj.setsc(8);
    obj.showall();

    return 0;
}