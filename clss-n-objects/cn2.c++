// undertsanding detrcutors
#include <bits/stdc++.h>
using namespace std;
class UseDestructors
{

public:
    int id;
    ~UseDestructors()
    {
        cout << "Destructor called for id : " << id << endl;
    }
};
int main()
{
    UseDestructors obj1;
    int i = 0;
    obj1.id = 7;
    while(i<5){
        UseDestructors obj2;
        obj2.id=i;
        i++;
    }//scope of obj2 ends here
    //inside the loop , an object obj2 is created in each iteration
    return 0;
}