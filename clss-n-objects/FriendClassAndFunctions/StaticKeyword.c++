#include <bits/stdc++.h>
using namespace std;
// static members are class members and can be accessed without creating an object
// they are initialized using --- return_typeof_staticMember class_name::static_member
class staticKeywordUsage
{
public:
    static int timeOut;
    staticKeywordUsage()
    {
        timeOut++;
    }

    //static member funtions
    //they are accessed without creating an object
    //they can access only static data mebers
    //they do not have this value
    static int statcMember(){
        return timeOut+=6;
    }

};

int staticKeywordUsage::timeOut = 10;
int main()
{
    // staticKeywordUsage s1;
    // staticKeywordUsage s2;
    // on every creation of object , costructor will be called and static member will be
    // increamented

    // accessing the static member directly by its class name
    cout << "Time Out Value : " << staticKeywordUsage ::timeOut << endl;

    //calling static member directly by class name
    cout<<"Time our value : "<<staticKeywordUsage::statcMember()<<endl;
    return 0;
}

// use cases of static mebers
/*
1) when we want a variable to maintain it's value throughout the program life cycle, not bound to any particular object or function.
2) when we want a variable to sharable among all objects
*/