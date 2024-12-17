#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *ptr;
    ptr = &a;

    cout << *(ptr) << endl;
    /*cout<<ptr<< endl;
    cout<<&a<<endl; */
    int *p = new int(30);
    cout << *(p) << endl;

    float *pt = new float(30.22);
    cout << *(pt) << endl;

    int *arr = new int[3];
    arr[0] = 20;
    arr[1] = 30;
    arr[2] = 40;
    // delete operator
    delete[] arr;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;

    return 0;

    return 0;
}