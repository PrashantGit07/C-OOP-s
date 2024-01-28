//to include some other class

//#include "class.c++"

// now we can create the object of that class



//static and dynamic allocation


#include<bits/stdc++.h>
using namespace std;
class hero{
    public:
        int h;
        char i;

    void getHealth(){
        h=5;
        cout<<"health : "<<h;
    }
};
int main(){
    hero *h  = new hero;
    (*h).getHealth();
return 0;
}