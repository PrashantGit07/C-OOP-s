// #include <bits/stdc++.h>
// using namespace std;
// class animal
// {
// private:
//     string name;

// public:
//     string getName()
//     {
//         return name = "Prashant";
//     }
// };
// int main()
// {
//     animal b;
//     cout << "the name is : " << b.getName();
// }

// function overloading

// #include<bits/stdc++.h>
// using namespace std;
// class appple{
//     public:
//         int sum(int a , int b){
//             int sum=a+b;
//             return sum;
//         }
//         int sum2(int a , int v , int c){
//              int sum=a+v+c;
//              return sum;
//         }
// };
// int main(){
//     appple a;
//     cout<<"sum is : " <<a.sum(2 ,5)<<endl;
//     cout<<"sum is : " <<a.sum2(2 ,7 ,4);
// return 0;
// }

// dynamic binding
// to decide which funtion to call at runtime
// #include <bits/stdc++.h>
// using namespace std;
// class dynamic
// {
//     int a = 5;

// public:
//     int printFirst()
//     {
//         return a;
//         printSecond();
//         // priority will be given to function call , so return will be
//     }
//     int printSecond()
//     {
//         return a + 5;
//     }
// };
// int main()
// {
//     dynamic d;
//     cout << "printing the answer : " << d.printFirst();
//     // it was decided at runtime that which function call will be invoked
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class hello
// {
//     int a = 5;

// public:
//     hello()
//     {
//         cout << "defualt constructor" << endl;
//     }
//     hello(int a)
//     {
//         this->a = a;
//         cout << "paramterized constrcutor will value :" << a << endl;
//     }
// } niceBhai(10);
// int main()
// {
//     // hello h1;
//     // h1.hello2(5);
//     return 0;
// }

// points from above program
// we can create instance of a class outiside the main function , only in case of constructors
// we can print default constructor without creating instance inside main, instead iin global scope.











// defining the member function outise the class

// #include <bits/stdc++.h>
// using namespace std;
// class hello
// {
//     string name;

// public:
//     // to define a function outsie the classs , first we have to declare inside the class
//     void usignOutisideClass();
//     void insideTheClass()
//     {
//         name = "Prashant";
//         cout << "the name is  : " << name << endl;
//     }
// };

// void hello::usignOutisideClass()
// {
//     cout << "this is the function defined outiside the class";
// }
// int main()
// {
//     hello h;
//     h.insideTheClass();
//     h.usignOutisideClass();
//     return 0;
// }





