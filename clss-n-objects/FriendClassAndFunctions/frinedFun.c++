#include <bits/stdc++.h>
using namespace std;

// friend function
class base; //forward declaration

class anotherBase
{
public:
    void accesingPrivateMembers(base &obj);
};

class base
{
    int a;

protected:
    int b;

public:
    base()
    {
        a=10;
        b=15;
    }
    friend void anotherBase::accesingPrivateMembers(base &);
};

void anotherBase::accesingPrivateMembers(base &obj)
{
    cout<<"the member a : "<<obj.a<<endl;
    cout<<"the member b : "<<obj.b<<endl;
}
int main()
{
    base b;
    anotherBase ab;
    ab.accesingPrivateMembers(b);
    return 0;
}