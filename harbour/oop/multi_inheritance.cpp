#include <iostream>
using namespace std;

class student
{
protected:
    int rollno;

public:
    void set(int r)
    { // set rollno
        rollno = r;
    }

    void show()
    { // get rollno
        cout << "the roll number is " << rollno << endl;
    }
};

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void setm(float m, float p)
    { // set marks
        maths = m;
        physics = p;
    }
    void showm(); // get marks
};
void exam ::showm()
{
    cout << "the marks of math is " << maths << endl;
    cout << "the marks of physics is " << physics << endl;
}

class result : public exam
{
    float percentage;

public:
    void shows(); // display results
};

void result ::shows()
{
    show();
    showm();
    cout << "the percentage is " << ((maths + physics) / 2) << endl;
}
int main()
{
    result harry;
    harry.set(420);
    harry.setm(99, 98);
    harry.shows();

    return 0;
}