#include <bits/stdc++.h>
using namespace std;

// this keyword refers to current object, it stores the address of current object

class usingThis
{
    int a;

public:
    int b;

    usingThis(int a, int b)
    {
        cout << "value of this is : " << this << endl;
        this->a = a;
        // this is refering to a(data member not constructor parameter)
        this->b = b;
    }
    void display()
    {
        cout << "value of a :" << a << endl;
        cout << "value of b :" << b << endl;
    }
};
int main()
{
    usingThis ts(5, 6);
    ts.display();

    usingThis ts2 = ts;
    ts2.b = 10;
    ts2.display();
    // ts.display();
    // if we  try to display address of object (ts) , it will be same as address printed on
    // line - 12
    cout << "address of object ts is  :" << &ts << endl;
    cout << "address of object ts is  :" << &ts2 << endl;
    return 0;
}