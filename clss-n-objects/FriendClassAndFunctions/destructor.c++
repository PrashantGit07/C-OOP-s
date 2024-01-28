#include <bits/stdc++.h>
using namespace std;
class usingDestructor
{
public:
    int a;

    usingDestructor(int a)
    {
        cout << "constructor called" << endl;
        this->a = a;
    }
    void display()
    {
        cout << "Value of a is " << a << endl;
    }
    ~usingDestructor()
    {
        cout << "destructor called" << endl;
    }
};
int main()
{
    // usingDestructor* u = new usingDestructor(2);
    usingDestructor u(5);
    u.display();
    // delete u;
    return 0;
}


//constructor properties
//it has no return type
//it can have parameters which are passed while creating object
//it is used to initialize the member variables of class


//destructor properties
//it also does not have any return type
//it is automatically called when an object goes out of scope
//it is used for clean up activities like freeing memory, closing files etc.
//there can be only one destructor in a class and it must have the same name as the class with tilde (~) prefixed before it</s>
//in C++, if we don't define our own destructor then compiler will generate default destructor for us
//default constructor and default destructor both do nothing in that case</s>
