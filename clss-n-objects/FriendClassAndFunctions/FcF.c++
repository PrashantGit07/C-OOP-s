#include<bits/stdc++.h>
using namespace std;
class firstOne{
    //a friend class can access private and protected member of the base class
    int a;

    protected:
        int b;
    
    public:
        firstOne(){
            a = 10;
            b = 15;
            
        }
    friend class secondOne;
};

class secondOne{
    public:
    //to access private mebers through a member of friend class, we pass object of base class as a parametr to the function 
        void accesingPrivateMembers(firstOne& f){
            cout<<"the value of private meber is : "<<f.a<<endl;
            cout<<"the value of protected meber is : "<<f.b<<endl;
        }
};
int main(){
    firstOne f;
    secondOne s;
    s.accesingPrivateMembers(f);
return 0;
}