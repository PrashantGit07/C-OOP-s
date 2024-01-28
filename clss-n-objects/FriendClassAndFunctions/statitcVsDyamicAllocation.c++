#include<bits/stdc++.h>
using namespace std;
class staticAndDynamicAllocation{
    public:
        int age;
        char bloodGroup;
    
    staticAndDynamicAllocation(int age , char bloodGroup){
        
        this->age = age;
        this->bloodGroup = bloodGroup;
    }
    void display(){
        cout<<"the age is  : "<<age<<endl;
        cout<<"the blood group is : "<<bloodGroup<<endl;
    }
};
int main(){
    //static allocation
    staticAndDynamicAllocation s(15 , 'A');
    s.display();


    //dynamic allocation
    staticAndDynamicAllocation* dy = new staticAndDynamicAllocation(21 , 'B');
    dy->display();
    cout<<dy->age<<endl;
    delete dy;
    //now it will throw garbage value
    dy->display();
return 0;
}